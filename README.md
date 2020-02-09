# ESP32_OTA
OTA (Over The Air) sketch uploading for ESP32 (that actually works!)

1. Connect ESP32 to computer USB port and identify COM port in Arduino IDE.

2. Copy the sketch into your Arduino IDE, modify the WiFi settings in the sketch to match your broadband router, and save the sketch.

3. In the Tools menu:

          a. Select the correct COM port.

          b. Set the board to "DOIT ESP32 DEVKIT V1".  If you cant find this board in the list 
          then go to the File menu, select Preferences and in the Additional Boards Manager URLs" 
          box paste in:    https://dl.espressif.com/dl/package_esp32_index.json    then click OK. 
          Then go back to the Tools menu again, select Boards, then choose Boards Manager. 
          In the window that opens up type   ESP32   into the search box, install the 
          esp32 by espressif library.

          c. Set the upload speed to 115200 and the Flash Frequency to 40 MHz.

          d. Select the Serial Monitor and make sure its set to 115200 baud.

4. Upload the sketch to your ESP32.

5. You might need to press and hold the "Boot" button on your ESP32 board to start the upload process,
once it starts uploading then you should release the button.

6.  Once the upload is complete then after a short delay the Serial Monitor window should display 
"Connecting to WiFi.....", then "Connected OK" followed by the IP address assigned to your ESP32 by your 
broadband router.  Write down this IP address as you will need it for OTA.

7.  
