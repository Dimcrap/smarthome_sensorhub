#include <Arduino.h>
#include <DHT.h>
#include <ArduinoSTL.h>
//#include <Cpp_Standard_Library.h>
//#include <memory>


class dhthandler{
    int dpin;
    DHT * c_dht;
    //std::unique_ptr<DHT> dhtptr;
    public:
        dhthandler();

};