#include <Arduino.h>
#include "dhthandler.h"

// put function declarations here:
int myFunction(int, int);
int led{2};


void setup() {

  pinMode(led, OUTPUT);
}

void loop() {

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}