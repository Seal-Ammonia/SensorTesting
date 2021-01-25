#include <arduino.h>
// 14 is the A0 pin number for Arduino
int ohmMeter(double rRef, double vIn = 5.0, int analogResolution = 1024, int alogPin = 14) {
  double stepSize;
  double vRef;
  double rSensor;

  stepSize = vIn/analogResolution;

  vRef = analogRead(alogPin) * stepSize;

  rSensor =  rRef * (vIn/vRef - 1);

  return rSensor;
}
