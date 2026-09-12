#include "dhthandler.h"
#include "DHT.h"
#include "HardwareSerial.h"
#include <cmath>



dhthandler::dhthandler(int digitalpin):dpin(digitalpin){
    dht=new DHT(dpin,DHT11);
    //

};

dhthandler::~dhthandler(){
    delete dht;
}


void dhthandler::start(){
    dht ->begin();
};


void dhthandler::defineTemp(){
    temper=dht->readTemperature(infarenheit);
    if(isnan(temper)){
        Serial.println("failed to read temperator");
    }
    Serial.print("Temperature: ");
    Serial.println(temper);
};


void dhthandler::defineHumitdity(){
    hum=dht->readHumidity();

    if(isnan(hum)){
        Serial.println("failed to read temperator");
    }
    Serial.print("Humidity: ");
    Serial.println(hum);
    
};