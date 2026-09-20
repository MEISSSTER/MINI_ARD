#include <Arduino.h>


void setup() {
  pinMode(48, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  digitalWrite(48, HIGH);
  delay(100);
  digitalWrite(48, LOW);
  delay(100);
  
  Serial.print("9600\n");
}
