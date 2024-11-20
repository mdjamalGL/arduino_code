#include "Arduino.h"

class Driver
{
  public:
  void setDirectionRegister();
  void setPORT(uint8_t newValue);
  uint8_t getPORT();
  void delayMili(int miliSeconds);
};