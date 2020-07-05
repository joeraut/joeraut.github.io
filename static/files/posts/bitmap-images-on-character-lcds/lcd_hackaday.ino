// Hack a Day Logo on a HD44780 Character LCD
// (c) Joseph Rautenbach

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,6,5,4,3,2);

// make some custom characters:
byte hackaday1[8] = {
  0b01100,
  0b11100,
  0b11110,
  0b00110,
  0b00001,
  0b00010,
  0b00010,
  0b00010
};
byte hackaday2[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b00000,
  0b00000,
  0b11011,
  0b10001
};
byte hackaday3[8] = {
  0b00110,
  0b00111,
  0b01111,
  0b01100,
  0b10000,
  0b01000,
  0b01000,
  0b01000
};
byte hackaday4[8] = {
  0b00010,
  0b00010,
  0b00010,
  0b00001,
  0b00110,
  0b11110,
  0b11100,
  0b01100
};
byte hackaday5[8] = {
  0b00000,
  0b00100,
  0b00000,
  0b01010,
  0b10101,
  0b00000,
  0b00000,
  0b00000
};
byte hackaday6[8] = {
  0b01000,
  0b01000,
  0b01000,
  0b10000,
  0b01100,
  0b01111,
  0b00111,
  0b00110
};

void setup() {

  // set up the lcd's number of columns and rows: 
  lcd.begin(16, 2);

  // load the custom characters into the LCD
  lcd.createChar(0, hackaday1);
  lcd.createChar(1, hackaday2);
  lcd.createChar(2, hackaday3);
  lcd.createChar(3, hackaday4);
  lcd.createChar(4, hackaday5);
  lcd.createChar(5, hackaday6);
  lcd.clear();
  // print them out
  lcd.setCursor(6, 0);
  for(int i=0; i<3; i++) lcd.print((char)i);
  lcd.setCursor(6, 1);
  for(int i=3; i<6; i++) lcd.print((char)i);

}

void loop() {
  //nothing to do here...
}


