void setup() {
    DDRD = 0b11111111;
}


void loop() {
  // starting value for PORTD = 00000000
  // (1<<0) = 00000001
  // [ PORTD |= (1<<0) ] == 00000001
  //
  // (1<<1) = 00000010
  // [ PORTD |= (1<<1) ] == 00000011
  for(int i = 0; i < 8; i++)
  {
      PORTD |= (1<<i);
      _delay_ms(400);
  }


  // starting value for PORTD = 11111111
  // ~(1<<7) = 01111111;
  // [ PORTD &= ~(1<<7) ] == 01111111
  for(int i = 7; i >= 0 ; i--)
  {
      PORTD &= (~(1<<i));
      _delay_ms(400);
  }
}
