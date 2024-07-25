#ifndef roberto_h
#define roberto_h
 class roberto {
  public:
    roberto(int in1, int in2, int enA);
    void begin();
    void testwithgal(int num);
    void move(int speed);
    void neo(int r, int g, int b , int p);
    void neo_all(int r, int g, int b);

  private:
    int _in1;
    int _in2;
    int _enA;

  
 };
#endif 