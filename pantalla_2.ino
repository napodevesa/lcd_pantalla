
 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  lcd.begin(16, 2);
}
void loop() {
  int temp = analogRead(A0); // Lee de la entrada analógica
  lcd.setCursor(0, 0);
  lcd.print("Hola Mundo");
  delay(150); // wait a bit:
  lcd.setCursor(0, 1);
  lcd.print("...");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("...");
  delay(150); // wait a bit:
  lcd.setCursor(0, 1);
  lcd.print("...
  ");
  delay(5000);
  lcd.clear();
}
