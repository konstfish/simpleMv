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
