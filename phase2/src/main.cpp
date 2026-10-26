#include <Arduino.h>
#include "1306.h"
#include <Wire.h>
#include "twihandler.h"
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLEDI2CADDR 0x3C

twowire wire ;

Adafruit_SSD1306 display( 127 , 64 ,&wire ) ;

void setup()
{
  oled_init() ;
  Wire.begin();
}

void loop() 
{

    fb_clear() ;
    fb_draw_char(2, 3, '3')  ;
    oled_flush() ;
    delay(500) ;
}
