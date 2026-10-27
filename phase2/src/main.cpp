#include <Arduino.h>
#include "1306i2c.h"
#include <Wire.h>
#include "twihandler.h"
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include "i2coledtest.h"



#define OLEDI2CADDR 0x3C
//0x08	START condition transmitted
//0x10	Repeated START transmitted
//0x18	SLA+W transmitted, ACK received
//0x20	SLA+W transmitted, NACK received
//0x28	Data transmitted, ACK received
//0x40	SLA+R transmitted, ACK received
//0x50	Data received, ACK returned
//0x58	Data received, NACK returned

//Adafruit_SSD1306 display( 128 , 64 ,&Wire , -1 ) ;

void setup()
{
  Serial.begin( 9600 ) ;
  twi_init() ;
  oled_init() ;
  fb_clear() ;
  //Wire.begin();
  
/*
  i2c_init() ;
  ssd1306_init() ;
  ssd1306_clear() ;*/


  /*display.begin(SSD1306_SWITCHCAPVCC , OLEDI2CADDR ) ; //SSD1306_SWITCHCAPVCC 

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10 );
  display.print("ehlllo its eee!") ;
  display.display();*/
}

void loop() 
{

    fb_clear() ;
    fb_draw_char(2, 12, '2')  ;
    fb_draw_string(10, 15, "AADSA324");
    //fb_draw_string( 4, 4, "4578" );
    oled_flush() ;
/*
    ssd1306_draw_char( 2, 8, 'B' );
    ssd1306_draw_char( 2, 25, '8' );
    ssd1306_display() ;*/


    delay(500) ;
}
