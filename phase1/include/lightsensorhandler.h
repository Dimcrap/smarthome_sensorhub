#include <Arduino.h>
#include <BH1750.h>
//#include <Wire.h>



class lighsensorhandler{
    
    BH1750 lightmeter;
    float lux;
    public:
    lighsensorhandler();
    void setup();
    void getlightinfo();
};