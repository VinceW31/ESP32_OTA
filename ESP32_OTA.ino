#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

const char* ssid = "BT-JKA22M";
const char* password= "9rM7hAVLEfeh4b";

void setup() {
//These lines are for OTA support, do not delete or change*****************************
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi.....");
    delay(1000);
    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
      Serial.println("Connection Failed! Rebooting...");
      //wifi_status = 0;
      delay(5000);
      ESP.restart();
    }
    ArduinoOTA.begin();
    Serial.println("Connected OK");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
//*************************************************************************************
//Insert sketch code from here*********************************************************
    

}

void loop() {
  ArduinoOTA.handle(); //This line is for OTA support, do not delete or change position
  //Insert sketch code from here*********************************************************
  
}
