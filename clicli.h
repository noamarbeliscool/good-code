#ifndef CLICLI_H
#define CLICLI_H
#include "roberto.h"

class clicli {

public:
  clicli(roberto &roberto);
  void begin();  //must be called from  void setup()
  void run();    //must be called from  void loop()

private:
  roberto &mymotor;
  int number;
};
#endif