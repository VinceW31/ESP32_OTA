#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

const char* ssid = "xxx";
const char* password= "yyy";

void setup() {
  
//These lines are for OTA support, do not delete or change*****************************

  WiFi.begin(ssid, password);
    delay(1000);
    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
      Serial.println("Connection Failed! Rebooting...");
      wifi_status = 0;
      delay(5000);
      ESP.restart();
    }
    wifi_status = 1;
  
    ArduinoOTA.begin();
  
    Serial.println("Ready");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
//*************************************************************************************

//Insert sketch code from here*********************************************************
    

}

void loop() {
  ArduinoOTA.handle(); //This line is for OTA support, do not delete or change position
 
  //Insert sketch code from here*********************************************************
  
}
