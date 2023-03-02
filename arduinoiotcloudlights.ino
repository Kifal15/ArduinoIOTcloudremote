#include "arduino_secrets.h"
#include "thingProperties.h"

int LED = D3;
int LED1 = D4;
bool led_switch_state = true; // variable to hold state of led_switch
bool d3_switch_state = true; // variable to hold state of d3_switch
bool d4_switch_state = true; // variable to hold state of d4_switch

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here

}

void onLedSwitchChange() {
  // Do something
  led_switch_state = led_switch; // update led_switch_state variable
  if (led_switch_state) {
    digitalWrite(LED, LOW);
    digitalWrite(LED1, LOW);
  } else {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED, HIGH);
  }
}

void onD3SwitchChange() {
  // Do something
  d3_switch_state = d3_switch; // update d3_switch_state variable
  if (d3_switch_state) {
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, HIGH);
  }
}

void onD4SwitchChange() {
  // Do something
  d4_switch_state = d4_switch; // update d4_switch_state variable
  if (d4_switch_state) {
    digitalWrite(LED1, LOW);
  } else {
    digitalWrite(LED1, HIGH);
  }
}

