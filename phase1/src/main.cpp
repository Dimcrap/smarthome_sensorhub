#include <Arduino.h>
#include <util/delay.h>
#include "HardwareSerial.h"
#include "dhthandler.h"
#include "pirhandler.h"
#include "lightsensorhandler.h"



// put function declarations here:
int myFunction(int, int);
int led{1},dhtdata{12},pirsensor(A4);

dhthandler dht_o(dhtdata);
pirhandler pir(pirsensor);
lighsensorhandler  lightsensor;


void setup() {

  Serial.begin(9600);
  pinMode(led, OUTPUT);
  dht_o.start();
  pir.setpinsmode();
  lightsensor.setup();

}

void loop() {
  
    .lightsensor.getlightinfo();
    
    
    delay(500);
}

