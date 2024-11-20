#include "Arduino.h"
#include "driver.h"

void Driver::setDirectionRegister()
{
  DDRD = 0b11111111;
}

void Driver::setPORT(uint8_t newValue)
{
  PORTD = newValue;
}

uint8_t Driver::getPORT()
{
  return PORTD;
}

void Driver::delayMili(int miliSeconds)
{
  _delay_ms(miliSeconds);
}