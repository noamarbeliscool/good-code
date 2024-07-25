


#include "roberto.h"
#include "Arduino.h"
#include <Adafruit_NeoPixel.h>
#define PIN        9 
#define NUMPIXELS 12
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
roberto::roberto(int in1, int in2, int enA) {
  _in1 = in1;
  _in2 = in2;
  _enA = enA;
}

void roberto::begin(){
  pixels.begin(); 
  pixels.setBrightness(120);
  Serial.begin(115200);
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
  pinMode(_enA, OUTPUT);
}

void roberto::testwithgal(int num){
  Serial.println(num);
}
void roberto::move(int speed){
  Serial.println("move method was called!");
  

  if(speed > 0){
    speed = map(speed, 0, 100, 0, 254);
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    analogWrite(_enA, speed);
  }
  else{
    speed = abs(speed);
    speed = map(speed, 0, 100,  0, 254);
    Serial.print("speed =");
    Serial.println(speed);
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    analogWrite(_enA, speed);
  }

}
void roberto::neo(int r, int g, int b , int p){
    Serial.println("neo method was called!");
    pixels.setPixelColor(p, pixels.Color(r ,g ,b));
    pixels.show();
    pixels.clear();
}

void roberto::neo_all(int r, int g, int b ){
    Serial.println("neo_all method was called!");
      for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();
    pixels.clear(); 
      }

}





