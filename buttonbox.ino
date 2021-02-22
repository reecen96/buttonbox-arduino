#include "Keyboard.h"

//button 1
const int buttonPin1 = 0;
int buttonState1 = 0;
int prevButtonState1  = HIGH;
//button 2
const int buttonPin2 = 1;
int buttonState2 = 0;
int prevButtonState2  = HIGH;
//button 3
const int buttonPin3 = 2;
int buttonState3 = 0;
int prevButtonState3  = HIGH;
//button 4
const int buttonPin4 = 3;
int buttonState4 = 0;
int prevButtonState4  = HIGH;
//button 5
const int buttonPin5 = 4;
int buttonState5 = 0;
int prevButtonState5  = HIGH;
//button 6
const int buttonPin6 = 5;
int buttonState6 = 0;
int prevButtonState6  = HIGH;
//button 7
const int buttonPin7 = 6;
int buttonState7 = 0;
int prevButtonState7  = HIGH;
//button 8
const int buttonPin8 = 7;
int buttonState8 = 0;
int prevButtonState8  = HIGH;
//button 9
const int buttonPin9 = 8;
int buttonState9 = 0;
int prevButtonState9  = HIGH;
//button 10
const int buttonPin10 = 9;
int buttonState10 = 0;
int prevButtonState10  = HIGH;
//button 11
const int buttonPin11 = 10;
int buttonState11 = 0;
int prevButtonState11  = HIGH;

void setup() {
//button 1
  pinMode(buttonPin1, INPUT_PULLUP);
  digitalWrite(buttonPin1, HIGH);
//button 2
  pinMode(buttonPin2, INPUT_PULLUP);
  digitalWrite(buttonPin2, HIGH);
//button 3
  pinMode(buttonPin3, INPUT_PULLUP);
  digitalWrite(buttonPin3, HIGH);
//button 4
  pinMode(buttonPin4, INPUT_PULLUP);
  digitalWrite(buttonPin4, HIGH);
//button 5
  pinMode(buttonPin5, INPUT_PULLUP);
  digitalWrite(buttonPin5, HIGH);
//button 6
  pinMode(buttonPin6, INPUT_PULLUP);
  digitalWrite(buttonPin6, HIGH);
//button 7
  pinMode(buttonPin7, INPUT_PULLUP);
  digitalWrite(buttonPin7, HIGH);
//button 8
  pinMode(buttonPin8, INPUT_PULLUP);
  digitalWrite(buttonPin8, HIGH);
//button 9
  pinMode(buttonPin9, INPUT_PULLUP);
  digitalWrite(buttonPin9, HIGH);
//button 10
  pinMode(buttonPin10, INPUT_PULLUP);
  digitalWrite(buttonPin10, HIGH);
//button 11
  pinMode(buttonPin11, INPUT_PULLUP);
  digitalWrite(buttonPin11, HIGH);

  Keyboard.begin();
}

void loop() {

  //button 1
  buttonState1 = digitalRead(buttonPin1);
  if ((buttonState1 != prevButtonState1) && (buttonState1 == HIGH)) {
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState1 = buttonState1;

  //button 2
  buttonState2 = digitalRead(buttonPin2);
  if ((buttonState2 != prevButtonState2) && (buttonState2 == HIGH)) {
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState2 = buttonState2;
  //button 3
  buttonState3 = digitalRead(buttonPin3);
  if ((buttonState3 != prevButtonState3) && (buttonState3 == HIGH)) {
    Keyboard.press('3');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState3 = buttonState3;
  //button 4
  buttonState4 = digitalRead(buttonPin4);
  if ((buttonState4 != prevButtonState4) && (buttonState4 == HIGH)) {
    Keyboard.press('4');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState4 = buttonState4;

  //button 5
  buttonState5 = digitalRead(buttonPin5);
  if ((buttonState5 != prevButtonState5) && (buttonState5 == HIGH)) {
    Keyboard.press('5');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState5 = buttonState5;

  //button 6
  buttonState6 = digitalRead(buttonPin6);
  if ((buttonState6 != prevButtonState6) && (buttonState6 == HIGH)) {
    Keyboard.press('6');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState6 = buttonState6;
  //button 7
  buttonState7 = digitalRead(buttonPin7);
  if ((buttonState7 != prevButtonState7) && (buttonState7 == HIGH)) {
    Keyboard.press('7');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState7 = buttonState7;
  //button 8
  buttonState8 = digitalRead(buttonPin8);
  if ((buttonState8 != prevButtonState8) && (buttonState8 == HIGH)) {
    Keyboard.press('8');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState8 = buttonState8;
  //button 9
  buttonState9 = digitalRead(buttonPin9);
  if ((buttonState9 != prevButtonState9) && (buttonState9 == HIGH)) {
    Keyboard.press('9');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState9 = buttonState9;
  //button 10
  buttonState10 = digitalRead(buttonPin10);
  if ((buttonState10 != prevButtonState10) && (buttonState10 == HIGH)) {
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
  }
  prevButtonState10 = buttonState10;
  //button 11

  buttonState11 = digitalRead(buttonPin11);
  if ((buttonState11 != prevButtonState11) && (buttonState11 == HIGH)) {
    Keyboard.press('2');
    delay(500);
    Keyboard.releaseAll();
  }
  prevButtonState11 = buttonState11;
}
