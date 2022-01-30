
//Example for setting a analog voltage with the DAC5571 over i2c
//created by c3ntaur

#include <Arduino.h>
#include <Wire.h>
#include "dac5571.h"


#define I2C_ADDR 0x4C  // 0x4C or 0x4D (if address pin is not driven by ttl logic)

int dac_value = 128;  // 0 - 255

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {

  setVoltage(dac_value,I2C_ADDR);
  Serial.print("Setting DAC value to: " + dac_value);
  delay(1000);

}
