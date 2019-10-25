#include <Arduino.h>
#include<AlphaBot.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void pause(long d){
  delay(d);
}

void bleep(long d){
  digitalWrite(13,HIGH);
  delay(d);
  digitalWrite(13,LOW);
  delay(d);
}


void loop() {
  long sBeep=100;
  long lBeep=500;
  long pauseShort=250;
  long pauseLong = 2000;

  Serial.println("Short beep: "+ sBeep);
  Serial.println("Long beep: "+ lBeep);
  Serial.println("Pause: "+ pauseLong);
  
  bleep(sBeep);
  bleep(sBeep);
  bleep(sBeep);
  pause(pauseShort);
  bleep(lBeep);
  bleep(lBeep);
  bleep(lBeep);
  pause(pauseShort);
  bleep(sBeep);
  bleep(sBeep);
  bleep(sBeep);

  pause(pauseLong);
  // put your main code here, to run repeatedly:
}