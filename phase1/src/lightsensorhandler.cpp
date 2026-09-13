#include "lightsensorhandler.h"
#include "Adafruit_Sensor.h"
#include "Wire.h"
#include <util/delay.h>



lighsensorhandler::lighsensorhandler(){
};


void lighsensorhandler::setup(){
    Wire.begin();
    lightmeter.begin();
    Serial.println(F("BH1750 Test begin"));
};


void lighsensorhandler::getlightinfo(){
    lux=lightmeter.readLightLevel();
    Serial.print("Light:");
    Serial.print(lux);
    Serial.println(" lx");
};