void setup() 
{
    Serial.begin(9600);
    Serial.print("Hello MDT");

}

void loop()
{

}
int buzzer = 8;
void setup() 
{
  pinMode(buzzer, OUTPUT);
   tone(buzzer, 900, 600);
   delay(100);
   tone(buzzer, 900, 600);
  delay(100); // ข้อ 1
}
void loop()
{
}
int buzzer = 8;
void setup() 
{
   delay(400);
   pinMode(buzzer, OUTPUT);
   tone(buzzer, 600, 400);
   delay(100);
   tone(buzzer, 600, 400);
   delay(100); // ข้อ 6
}
int buzzer = 8;
void setup() 
{
   pinMode(buzzer, OUTPUT);
   tone(buzzer, 900, 600);
 delay(100);
   tone(buzzer, 900, 600);
   delay(100); // ข้อ 1
}
void loop()
{
}
int buzzer = 8;
void setup() 
{
   delay(400);
   pinMode(buzzer, OUTPUT);
   tone(buzzer, 600, 400);
   delay(100);
   tone(buzzer, 600, 400);
   delay(100); // ข้อ 6
}
void loop()
{
}
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
    lcd.init();
   lcd.backlight();
  lcd.setCursor(6, 0);
   lcd.print("Hello");
    lcd.setCursor(7, 1);
    lcd.print("MDT");
   delay(1500);
   lcd.clear(); // ข้อ 5
}
void loop() 
{
    
}
void loop()
{
}
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
    lcd.init();
   lcd.backlight();
  lcd.setCursor(6, 0);
    lcd.print("Hello");
    lcd.setCursor(7, 1);
    lcd.print("MDT");
   delay(1500);
   lcd.clear(); // ข้อ 5
}
void loop() 
{
    
}
