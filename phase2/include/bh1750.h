#include <avr/io.h>
#include "twihandler.h"

#define SEND_CMD 0x20
#define SENSORADDR 0x23
#define RESULOUTION 0x10
//reading two bytes and dividing by 1.2


class bh1750driver{

    void bh1750_init();
    void bh1750_readvalue();
};




