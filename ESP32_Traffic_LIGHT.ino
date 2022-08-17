// C++ code
//
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const int red1=12;
const int yellow1=14;
const int green1=27;


const int red2=26;
const int yellow2=25;
const int green2=33;


const int red3=15;
const int yellow3=2;
const int green3=19;


const int red4=16;
const int yellow4=17;
const int green4=18;
void setup()
{
  lcd.init();
  //lcd.init();
  lcd.backlight();
  lcd.print("TRAFFIC LIGHT");
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(yellow4, OUTPUT);
  pinMode(green4, OUTPUT);
  delay(100);
  digitalWrite(red1,HIGH);
  digitalWrite(yellow1,HIGH);
  digitalWrite(green1,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(yellow2,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(yellow3,HIGH);
  digitalWrite(green3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(yellow4,HIGH);
  digitalWrite(green4,HIGH);
  
  delay(5000);
  digitalWrite(red1,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(green4,LOW);
  delay(1000);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("RED   ");
  lcd.setCursor(7,0);
  lcd.print("GREEN");
  lcd.setCursor(0,1);
  lcd.print("GREEN");
  lcd.setCursor(7,1);
  lcd.print("RED   ");
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(green3,HIGH);
  digitalWrite(red4,HIGH);
  delay(7000);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  lcd.setCursor(7,0);
  lcd.print("YELLOW");
  lcd.setCursor(0,1);
  lcd.print("YELLOW");
  digitalWrite(yellow2,HIGH);
  digitalWrite(yellow3,HIGH);
  delay(3000);
  digitalWrite(red1,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  lcd.setCursor(7,0);
  lcd.print("RED   ");
  lcd.setCursor(0,1);
  lcd.print("RED   ");
  lcd.setCursor(0,0);
  lcd.print("GREEN");
  lcd.setCursor(7,1);
  lcd.print("GREEN");
  digitalWrite(green1,HIGH);
  digitalWrite(green4,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(red3,HIGH);
  delay(7000);
  lcd.setCursor(0,0);
  lcd.print("YELLOW");
lcd.setCursor(7,1);
  lcd.print("YELLOW");
  digitalWrite(green1,LOW);
  digitalWrite(green4,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow4,HIGH);
  delay(3000);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
} 
