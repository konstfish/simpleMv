# simpleMv

[![N|Solid](http://break.co.at/dTxpPi9lDf.thumb.png)](http://break.co.at)

simpleMv is a Arduino Zumo Lib made to make controlling the Zumo easier.

### Required Libraries

* [ZumoMotors.h](https://github.com/konstfish/zumo-32u4-arduino-library)

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

### Todos

 - More functions

License
----

MIT


