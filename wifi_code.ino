#include <WiFi.h>
const char* WIFI_NAME= "";
const char* WIFI_PASSWORD = "";
WiFiServer server(80);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

Serial.print("Connecting to ");
Serial.println(WIFI_NAME);
WiFi.begin(WIFI_NAME, WIFI_PASSWORD);

while (WiFi.status() != WL_CONNECTED) {
delay(1000);
Serial.print("Trying to connect to Wifi Network");
}
Serial.println("");
Serial.println("Successfully connected to WiFi network");
server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}
