#include "Arduino.h"
#include "iBUStelemetry.h"

iBUStelemetry telemetry(PB0);

byte i;

void setup(){
  telemetry.begin(115200);
  telemetry.addSensor(0x03);
}

void loop(){
  float voltage = analogRead(PB3) * (5.0 / 1023.0);
  telemetry.setSensorMeasurement(1, voltage);
  delay(1000);
}
