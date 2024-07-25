#include "roberto.h"
#include "clicli.h"
#include <Adafruit_NeoPixel.h>

roberto mymotor(8, 10, 11); //in1, in2, enA
clicli mycli(mymotor);  

void setup() {
  mymotor.begin();
}

void loop() {
  mycli.run();
  
}
