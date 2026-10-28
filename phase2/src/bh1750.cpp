#include "bh1750.h"
#include "twihandler.h"
#include <cstdint>



void bh1750driver::bh1750_init(){
    //set transition for sensor address 
    twi_start();
    twi_write(SENSORADDR << 1 );
    uint8_t ack = twi_write( (uint8_t) RESULOUTION ) ;
    twi_stop();

    //check acknowledge '0' is fine
}


void bh1750driver::bh1750_readvalue(){
    //requesting value 
    // converting it to lux
};