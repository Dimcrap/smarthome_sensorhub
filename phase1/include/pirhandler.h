#include <Arduino.h>
#include <avr/io.h>

class pirhandler{
    int buzzer{0},senser;

    void buzz(){
        tone(buzzer,10);
        delay(400);
        tone(buzzer,13);
        delay(500);
        noTone(buzzer);
    };
    public:
        pirhandler(int pirsensor,int buzzpin=3):buzzer(buzzpin),senser(pirsensor){

        };
        void setpinsmode(){
            pinMode(senser,INPUT);
            PIND
        };
        void checkOnsensor(){
            int state{analogRead(senser)};
            Serial.println(state);

            if( digitalRead(senser)!=LOW){
                buzz();
                Serial.println("motion detected");
            }
            
            
            
        };
        
};