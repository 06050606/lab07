#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {
lcd.begin(16, 2); // set up the LCD's number of columns and rows:
lcd.print("06050606"); // Print a message to the LCD.
}
void loop() {
lcd.setCursor(0, 1);
lcd.print("sherry");
}
