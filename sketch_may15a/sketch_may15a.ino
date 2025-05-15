#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2


#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 
static const unsigned char PROGMEM logo16_glcd_bmp[] =
{ B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000 };

#if (SH1106_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SH1106.h!");
#endif

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

#define OLED_ADDR   0x3C

// Use meaningful names for sensors
int mealSensor1 = A0;
int mealSensor2 = A1;
int mealSensor3 = A2;
int mealSensor4 = A3;
int mealSensor5 = A4;



void setup() {
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 30);
  display.println("Welcome   to   the   restaurant");
  pinMode(mealSensor1, INPUT);
  pinMode(mealSensor2, INPUT);
  pinMode(mealSensor3, INPUT);
  pinMode(mealSensor4, INPUT);
  pinMode(mealSensor5, INPUT);

  display.display();
  delay(5000);
}

void loop() {
  display.clearDisplay();

  // Read sensor statuses
  int sensorStatus1 = digitalRead(mealSensor1);
  int sensorStatus2 = digitalRead(mealSensor2);
  int sensorStatus3 = digitalRead(mealSensor3);
  int sensorStatus4 = digitalRead(mealSensor4);
  int sensorStatus5 = digitalRead(mealSensor5);

  // Update display based on sensor statuses
  if (sensorStatus1 == HIGH) {
    display.setCursor(0, 10);
    display.println("Burger and crusher");
    delay(300);
  }

  if (sensorStatus2 == HIGH) {
    display.clearDisplay();
    display.setCursor(0, 20);
    display.println("Place Your Order!");
    delay(300);
  }

  if (sensorStatus3 == HIGH) {
    display.clearDisplay();
    display.setCursor(0, 30);
    display.println("Pizza and coke");
    delay(300);
  }

  if (sensorStatus4 == HIGH) {
    display.clearDisplay();
    display.setCursor(0, 40);
    display.println("muffins and tacos");
    delay(300);
  }

  if (sensorStatus5 == HIGH) {
    display.clearDisplay();
    display.setCursor(0, 50);
    display.println("coldcoffe and garlic bread");
    delay(300);
  }

  // Display updates only when there's a change in sensor status
  display.display();
  delay(500);  // Adjust delay as needed
}
