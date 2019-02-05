# simpleMv

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](https://travis-ci.org/joemccann/dillinger)

simpleMv is a Arduino Zumo Lib made to make controlling the Zumo easier.

### Required Libraries

* [ZumoMotors.h](https://github.com/pololu/zumo-shield/)

### Example Code

```c++
#include "simpleMv.h"

simpleMv mv;

void setup() {
  mv.fwd(100, 100);
}

void loop() {
  mv.turnRight();
  mv.consolePrint(100);
  mv.shutd();
}
```

### Functions

* turnRight();
* turnLeft();
* oneEighty();
* fwd(int speed, int del);
* rev(int speed, int del);
* consolePrint(int inp);
* shutd();

License
----

MIT


