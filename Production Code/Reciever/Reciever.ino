#include "RadioReciever.h"

void setup() {
  Serial.begin(9600);
  setupRadio();
}

void loop() {
  Serial.write((char*)recieveRadioMessage());
}
