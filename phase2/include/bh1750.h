#include <avr/io.h>
#include <cstdint>
#include "Arduino.h"
#include "twihandler.h"

#define SEND_CMD 0x20
#define SENSORADDR 0x23
#define RESULOUTION 0x10

constexpr byte default_mtreg = 69 ;

typedef  uint8_t byte ;
//reading two bytes and dividing by 1.2


class bh1750driver{

    void setmode() ;
    void setMTreg( byte mtreg) ; 
    public :
    void bh1750_init() ;
    void bh1750_readvalue() ;
    
};




