#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 2

#define PIN 6
#define red 0xFF0000
#define green 0x00FF00
#define blue 0x0000FF
#define yellow 0xFFFF00
#define purple 0xFF00FF
#define cyan 0x00FFFF
#define white 0xFFFFFF
#define black 0x000000

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 500; // delay for half a second

void ledOn(int n, uint32_t col){
  int ledNumber=n-1;
  pixels.setPixelColor(ledNumber, col);
  pixels.show(); // This sends the updated pixel color to the hardware.
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
