#include <Arduino.h>
#include <DHT.h>
#include <ArduinoSTL.h>
//#include <Cpp_Standard_Library.h>
//#include <memory>


class dhthandler{
    int dpin;
    DHT * dht;
    float temper{0},hum{0};
    
    
    public:
        bool infarenheit{false};

        dhthandler(int digitalpin);
        ~dhthandler();
        void start();
        void defineTemp();
        void defineHumitdity();

};