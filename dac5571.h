#include <Arduino.h>
#include <Wire.h>

void setVoltage(byte offset, byte i2c_address){
  byte hb = offset >> 4;
  byte lb = offset & 0x0F;
  Wire.beginTransmission(i2c_address); //76
  Wire.write(hb);
  Wire.write(lb);
  Wire.endTransmission();
}
