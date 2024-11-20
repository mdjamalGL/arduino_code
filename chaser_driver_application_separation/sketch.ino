#include "driver.h"

Driver driver;
void setup() {
    driver.setDirectionRegister();
}


void loop() {
  for(int i = 0; i < 8; i++)
  {
      driver.setPORT(
        driver.getPORT() | (1 << i)
        );

      driver.delayMili(300);
  }


  for(int i = 7; i >= 0 ; i--)
  {
      driver.setPORT(
        driver.getPORT() ^ (1 << i)
        );

      driver.delayMili(300);
  }
}
