#include <Arduino.h>
#include "LiquidCrystal.h"

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup()
{
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop()
{
  // put your main code here, to run repeatedly:
  lcd.setCursor(3, 0);
  lcd.print("TESTE LCD");
  lcd.setCursor(5, 1);
  lcd.print("Teste");
  delay(3000);

  for (int poss = 0; poss < 3; poss++)
  {
    lcd.scrollDisplayLeft();
    delay(100);
  }

  for (int poss = 0; poss < 6; poss++)
  {
    lcd.scrollDisplayRight();
    delay(100);
  }
  for (int poss = 0; poss < 3; poss++)
  {
    lcd.scrollDisplayLeft();
    delay(100);
  }
}