#include "SevenSegmentLed.h"
SevenSegmentLed sevenSegmentLed(100);

void setup() {
  for(int i = 8; i <= 16; i++)
  {
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  sevenSegmentLed.cycle(Zero, Zero);
  delay(500);
  sevenSegmentLed.cycle(Zero, One);  
  delay(500);
  sevenSegmentLed.cycle(Zero, Two);  
  delay(500);
  sevenSegmentLed.cycle(Zero, Three);
  delay(500);
  sevenSegmentLed.cycle(Zero, Four);
  delay(500);
  sevenSegmentLed.cycle(Zero, Five);
  delay(500);
  sevenSegmentLed.cycle(Zero, Six);
  delay(500);
  sevenSegmentLed.cycle(Zero, Seven);
  delay(500);
  sevenSegmentLed.cycle(Zero, Eight);
  delay(500);  
  sevenSegmentLed.cycle(Zero, Nine);
  delay(500);
}
