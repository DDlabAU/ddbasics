#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 4
#define PIN 6
int red[3] = {1,0,0};
int green[3] = {0,1,0};
int blue[3] = {0,0,1};
int yellow[3] = {1,1,0};
int purple[3] = {1,0,1};
int cyan[3] = {0,1,1};
int white[3] = {1,1,1};
int black[3] = {0,0,0};

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 500; // delay for half a second

void ledOn(int n, int col[], int bright){
  int mapped = map(bright,0,100,0,255);
  pixels.setPixelColor(n-1, pixels.Color(col[0]*mapped,col[1]*mapped,col[2]*mapped));
  pixels.show(); // This sends the updated pixel color to the hardware.
}

void pause(float t){
  int p = t * 1000;
  delay(p);
}
