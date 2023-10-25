#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

const char *ssid = "hongyunguang";
const char *password = "12345678";
const char *mqtt_server = "iot-06z00a6imnvcven.mqtt.iothub.aliyuncs.com";
const int   mqtt_port = 1883;
const char *mqtt_user = "0001&ivggNBqKEUd";
const char *mqtt_pass = "45feac8c8dbafb3e367670c252a3838c0eda1b7b148906fb96125bcda7f22dd2";
const char *mqtt_clientId = "ivggNBqKEUd.0001|securemode=2,signmethod=hmacsha256,timestamp=1686114025055|";
const char *mqtt_sub_topic = "/broadcast/ivggNBqKEUd/0001";
const char *mqtt_sub_topic1 = "/broadcast/ivggNBqKEUd/0002";
const char *mqtt_pub_topic = "/sys/ivggNBqKEUd/0001/thing/event/property/post";
const char *mqtt_pub_topic1 = "/broadcast/ivggNBqKEUd/app";

typedef struct
{
  float temp;
  float humi;
  int jd_sta;
  int haver_people;

}MY_INFO;

WiFiClient espClient;
PubSubClient client(espClient);

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

#define MSG_BUFFER_SIZE  (500)
char rx_msg[MSG_BUFFER_SIZE];uint16_t rxlen=0;
char tx_msg[MSG_BUFFER_SIZE];uint16_t txlen=0;
MY_INFO my_info;

void setup_wifi() {
  delay(10);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
void setup_time(void){
  timeClient.begin();
  timeClient.setTimeOffset(8*3600);
  while(timeClient.update()==false){
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
void callback(char* topic, byte* payload, unsigned int length) {
  payload[length] =0;
  char *buffer=(char*)payload;
  if(topic[26]=='1'){
    if(buffer[0] == '1'){
      Serial.print('A');
      Serial.print(1);
      Serial.print('.');
    }
    if(buffer[0] == '0'){
      Serial.print('A');
      Serial.print(0);
      Serial.print('.');
    }
  }
  if(topic[26]=='2'){
    Serial.print('B');
    Serial.print(buffer);
    Serial.print('.');
  }
  
}

void reconnect() {
  // Loop until we're reconnected
  while (client.connected()==false) {
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    if (client.connect(mqtt_clientId, mqtt_user, mqtt_pass))
    {
      client.subscribe(mqtt_sub_topic);
      client.subscribe(mqtt_sub_topic1);
    } else {
      // Wait 5 seconds before retrying
      Serial.println("fail to connect server");
      delay(5000);
    }
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  setup_wifi();
  setup_time();
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
}
uint8_t start = 0;
void loop() {
  if (!client.connected()) {
    reconnect();
  }
  while (Serial.available())
  {
    uint8_t data = Serial.read();
    if(data == '{'){
      rx_msg[rxlen++] = data;
      start=1;
      continue;
    }
    if(start==1){
      rx_msg[rxlen++] = data;
    }
    if ((data == '}')&&(start==1))
    {
      char buf[1024];
      sscanf(rx_msg,"{%f,%f,%d,%d}",&my_info.temp,&my_info.humi,&my_info.haver_people,&my_info.jd_sta); 
      StaticJsonDocument<256> doc;
      doc["id"] = "123";
      doc["version"] = "1.0";

      JsonObject params = doc.createNestedObject("params");
      params["temp"]["value"] = my_info.temp;
      params["humi"]["value"] = my_info.humi;
      params["people"]["value"] = my_info.haver_people;
      params["jd"]["value"] = my_info.jd_sta;
      doc["method"] = "thing.event.property.post";

      serializeJson(doc, buf);
      client.publish(mqtt_pub_topic, buf);

      StaticJsonDocument<64> doc1;

      doc1["temp"] = my_info.temp;
      doc1["humi"] = my_info.humi;
      doc1["people"] = my_info.haver_people;
      doc1["jd"] = my_info.jd_sta;

      serializeJson(doc1, buf);
      client.publish(mqtt_pub_topic1, buf);

      rxlen=0;
      start=0;
    }
    
  }

  client.loop();
  timeClient.update();
}