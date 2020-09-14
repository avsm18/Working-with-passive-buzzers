#define BUZZER 8
void setup() {
 
pinMode(BUZZER , OUTPUT); // so clearly we are controlling the passive buzzer using the digital pin so therefore the pin 8 acts as digital output pin.





}

void loop() {

tone(BUZZER , 1000 );
delay(1000);
noTone(BUZZER);
delay(1000);




  
}
