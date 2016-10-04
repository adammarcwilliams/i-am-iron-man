// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();

void setup() {
    
    b.begin();
    //expose ironMan function for IFTTT intergration
    Particle.function("ironMan", ironMan);

}

void loop() {
    
}

int ironMan(String null) {
     
     // Arc Reactor Power-Up Sequence
     b.ledOn(12, 0, 255, 255); // cyan LED
     delay(500);
     b.ledOn(2, 0, 255, 255);
     b.ledOn(10, 0, 255, 255);
     delay(500);
     b.ledOn(3, 0, 255, 255);
     b.ledOn(9, 0, 255, 255);
     delay(500);
     b.ledOn(4, 0, 255, 255);
     b.ledOn(8, 0, 255, 255);
     delay(500);
     b.ledOn(5, 0, 255, 255);
     b.ledOn(7, 0, 255, 255);
     delay(500);
     b.ledOn(4, 0, 255, 255);
     b.ledOn(6, 0, 255, 255);
     delay(500);
     
    // Pulsate Arc reactor 5 times 
    for(int i = 0; i < 5; i++) { 
    
        for(int i = 0; i <= 255; i++) {
            b.allLedsOn(0,i,i);
            delay(5);
        }
        
        for(int i = 255; i >= 0; i--) {
            b.allLedsOn(0,i,i);
            delay(5);
        }
    }
    return 0;
}
