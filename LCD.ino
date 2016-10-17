//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// LCD
// 
// Made by hugo medeiros fernandes
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/2141868-lcd


#include <LiquidCrystal.h>

int rs = 12;
int e = 11;
int db4 = 5;
int db5 = 4;
int db6 = 3;
int db7 = 2;

LiquidCrystal lcd(rs, e, db4, db5, db6, db7);

String text = "";

void setup() {
  Serial.begin(9600);
  lcd.clear();
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  
  if (Serial.available() > 0){
    //lcd.clear();
    text = Serial.readString();    
  }
  for (int i = 16; i >= 0; i--){
    lcd.setCursor(1, 0);
    lcd.print("www.hugao.com");
    lcd.setCursor(i, 1);
    lcd.print(text);
    delay(500);
    lcd.clear();
  }
  //for (int i= 0; i < 16; i++){
  	//lcd.scrollDisplayLeft();
    //delay(300);
  //}
  //lcd.autoscroll();
  //delay(800);
}

