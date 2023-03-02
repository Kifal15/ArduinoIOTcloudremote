# Esp32RemoteAcess

This code allows you to control two LEDs connected to an ESP32 board using the Arduino IoT Cloud. You can turn on/off the LEDs using the switches provided on the IoT Cloud dashboard. The LEDs can also be controlled locally using a web browser on the local host.

## Table of Contents
    - Features
    - Getting Started
    - Prerequisites
    - Installation
    - Usage
    - Built With
    - License
    - Acknowledgments
## Features
    Control two LEDs using switches provided on the Arduino IoT Cloud dashboard
    Control the LEDs using a web browser on the local host
    Can be accessed remotely
##  Getting Started
    To get a local copy up and running follow these simple steps.

## Prerequisites
    ESP32 board
    Arduino IDE
    Arduino IoT Cloud account
## Installation
    Clone the repo
    sh
    Copy code
    git clone https://github.com/your_username_/Project-Name.git
    Open the project in Arduino IDE
## Install the required libraries:
    ArduinoIoTCloud
    WiFi
    Upload the code to the ESP32 board
## Running the code
    Download and install the Arduino IDE from the official website.
    Install the ESP32 board on the Arduino IDE. To do this, open the Arduino IDE and go to File > Preferences. In the Additional Boards Manager URLs field, add the    following URL: https://dl.espressif.com/dl/package_esp32_index.json. Then, go to Tools > Board > Boards Manager and search for "esp32". Install the board by clicking the "Install" button.
    Download the required libraries by going to Sketch > Include Library > Manage Libraries. Search for and install the following libraries:
    ArduinoIoTCloud
    WiFiNINA
    Open the "Esp32LocalHostLights" code in the Arduino IDE.
    Connect your ESP32 board to your computer using a USB cable.
    In the Arduino IDE, go to Tools > Port and select the port that corresponds to your ESP32 board.
    Go to Tools > WiFi and enter your WiFi network SSID and password.
    Upload the code to your ESP32 board by clicking the "Upload" button.
    Once the code is uploaded, open the Serial Monitor by clicking the "Serial Monitor" button in the top right corner of the Arduino IDE.
    The Serial Monitor will display the IP address of the ESP32 board. Copy this IP address and paste it into a web browser.
    The web page will show a button that you can click to turn on/off the LED connected to pin D3 and another button to turn on/off the LED connected to pin D4.
    You can also access the web page remotely by typing the IP address of the ESP32 board into a web browser on another device connected to the same WiFi network.
## Usage
    Log in to your Arduino IoT Cloud account
    Create a new Thing and add two switches
    Add the Thing ID and Thing Secret to the thingProperties.h file
    Open the Serial Monitor in Arduino IDE to obtain the device certificate
    Copy the certificate and paste it into the thingProperties.h file
    Open the web browser on your local host and navigate to http://<ESP32_IP_address>
    Turn on/off the LEDs using the switches on the IoT Cloud dashboard or the web browser
    ![github](https://user-images.githubusercontent.com/88394912/222509921-5e6ee42c-1358-4b82-a086-b1a2212cc778.PNG)
## Built With
    Arduino IoT Cloud
    Arduino IDE
    ESP32 board
## License
    Distributed under the MIT License. See LICENSE for more information.
    
