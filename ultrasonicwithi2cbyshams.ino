#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int trigpin = 12;
int echopin = 13; 
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
lcd.begin();
pinMode(trigpin, OUTPUT);
pinMode(echopin,INPUT);
  lcd.setCursor(1, 0);
  lcd.print("Shams");
  lcd.setCursor(4, 1);
  lcd.print("Presents");
  delay(2000);
}
void loop()
{
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

long duration = pulseIn(echopin, HIGH);
int distance = (duration * 0.034 / 2) ;

lcd.clear();
lcd.print("Distance: ");
lcd.print(distance);
lcd.println(" cm  ");
delay(100);
lcd.setCursor (0,1);
 lcd.print("Thankui  4 wtchng");
  delay(500);
}
