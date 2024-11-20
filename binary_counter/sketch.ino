
int count = 0;      
bool buttonState = 0;

void setup() {
  
  DDRB = 0b1111110; //8th pin is set to 0 for output   
  DDRD = 0b11111111; 
  PORTD = 0b0;

}
void loop() {
  
  buttonState = PINB & 0b1; 
  
  if (buttonState == LOW) {
    count++;
    PORTD = (count<<4);
  }
  _delay_ms(100);
}