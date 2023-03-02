### Esp32LocalHostLights
This project allows you to control the lights on your ESP32 microcontroller using a remote cloud interface. It is accessible remotely through the Arduino IoT Cloud. The code is written in Arduino language and utilizes the ESP32 microcontroller, along with the Arduino IoT Cloud platform.

Components
ESP32 Microcontroller
The ESP32 microcontroller is a powerful, low-cost microcontroller that features built-in Wi-Fi and Bluetooth connectivity, making it ideal for Internet of Things (IoT) applications.

Arduino IoT Cloud
Arduino IoT Cloud is a platform that allows you to connect your devices to the cloud and control them remotely. It provides a simple and secure way to manage your IoT projects and includes features like data logging, analytics, and notifications.

thingProperties.h
The `thingProperties.h` file is used to define the properties of the device that will be managed through the Arduino IoT Cloud. In this project, it defines the properties of the LED switches, which are controlled by the user interface.

How it Works
The `setup()` function initializes the ESP32 microcontroller and connects to the Arduino IoT Cloud. The loop() function continually updates the cloud connection and allows for additional code to be executed as desired.

The `onLedSwitchChange()`, `onD3SwitchChange()`, and `onD4SwitchChange()` functions are called when the corresponding switches are changed on the user interface. They update the corresponding state variables and turn on or off the LED lights accordingly.

The user interface can be accessed through a web browser on the local host or remotely through the Arduino IoT Cloud.

Usage
To use this code, simply upload it to your ESP32 microcontroller and connect it to the Arduino IoT Cloud. You can then access the user interface through a web browser on your local host or remotely through the Arduino IoT Cloud. From there, you can turn on and off the LED lights as desired.

Please refer to the Arduino IoT Cloud documentation for more information on how to set up and use the cloud platform.

Acknowledgements
This project was inspired by the Arduino IoT Cloud Getting Started Guide.
