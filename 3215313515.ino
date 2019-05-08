#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() 
{
lcd.begin(20, 2); 
Serial.begin(9600);
}
void loop()
{
  char a;
  if(Serial.available())
  {
    a=Serial.read();
    lcd.print(a);
    }
}
