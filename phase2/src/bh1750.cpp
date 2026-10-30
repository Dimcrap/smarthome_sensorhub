#include "bh1750.h"
#include "twihandler.h"
#include <cstdint>
#include <util/delay.h>



void bh1750driver::bh1750_init(){
    //set transition for sensor address 
    setmode();
    //check acknowledge '0' is fine
}


void setmode()
{
    byte ack = 5 ;
    twi_start();
    twi_write(SENSORADDR << 1 );
    twi_write( (uint8_t) RESULOUTION ) ;
    //ack = twi_write( (uint8_t) RESULOUTION ) ;
    ack = twi_read_ack() ;
    twi_stop();

    _delay_ms(15);

    if( ack != 0 ){
        Serial.println(" failed to set mode ");
    }
    /*case 1: // too long for transmit buffer
    Serial.println(F("[BH1750] ERROR: too long for transmit buffer"));
    break;
  case 2: // received NACK on transmit of address
    Serial.println(F("[BH1750] ERROR: received NACK on transmit of address"));
    break;
  case 3: // received NACK on transmit of data
    Serial.println(F("[BH1750] ERROR: received NACK on transmit of data"));
    break;
  case 4: // other error
    Serial.println(F("[BH1750] ERROR: other error"));
    break;
  default:
    Serial.println(F("[BH1750] ERROR: undefined error"));
    break;*/
}


void bh1750driver::setMTreg( byte mtreg ) {
    byte ack = 5 ;
    
    twi_start() ;
    twi_write( SENSORADDR << 1 );
    twi_write( ( 0b01000 << 3 ) | ( mtreg >> 5 ) ) ;
    ack = twi_read_ack() ;
    twi_stop() ;

    twi_start() ;
    twi_write( SENSORADDR << 1 );
    twi_write( (0b011 << 5) | ( mtreg & 0b11111 ) );
    ack = ack | twi_read_ack() ;
    twi_stop() ;

}; 


void bh1750driver::bh1750_readvalue(){
    //requesting value 
    // converting it to lux
};

