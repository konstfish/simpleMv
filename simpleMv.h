#ifndef SimpleMv_h
#define SimpleMv_h

/*! \file simpleMv.h
 *
 *
 *
 * \class simpleMv simplMv.h
 *
 * desc
 */

#include <Arduino.h>
#include <avr/power.h>
//#include "QTRSensors.h"
//#include "ZumoReflectanceSensorArray.h"
#include "ZumoMotors.h"

class simpleMv
{
  public:
    simpleMv();
    void turnRight();
    void turnLeft();
    void oneEighty();
    void fwd(int speed, int del);
    void rev(int speed, int del);
    void consolePrint(int inp);
    void shutd();
   private:
     ZumoMotors motors;
};

#endif
