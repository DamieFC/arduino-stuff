//www.elegoo.com
//2016.12.09
#include <LiquidCrystal.h>

// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output
// init lcd
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.print("Switch:  ");
  lcd.print(digitalRead(SW_pin));
  lcd.print("\n");
  lcd.print("X-axis: ");
  lcd.print(analogRead(X_pin));
  lcd.print("\n");
  lcd.print("Y-axis: ");
  lcd.println(analogRead(Y_pin));
  lcd.print("\n\n");
  delay(1000);
}
