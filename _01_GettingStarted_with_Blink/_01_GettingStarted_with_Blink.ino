/* 
 * Title: A first sketch to blink an LED 
 * Description: This is a basic Ardunino program to show how to upload a program and
 * change its behavior. It is intended to be used with a board with an external LED.
 * 
 * Written by Dr. Jeremy S. Daily
 * The University of Tulsa, Department of Mechanical Engineering
 * 
 * Assignment: Change the program to blink without using a delay function call.
 * To do this, use the elapsedMillis timer class and test to see if the number of elapsedMillis
 * has exceded a value. If it does, reset the time and change the LED state. You will have to 
 * declare a variable to use to keep track of the LED state.
 */

//Declare which pin is connected to the LED
//Use the Teensy Reference Card and the board schematics to determine the pin number.
const uint8_t redLEDpin = 21;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLEDpin, HIGH);
  delay(500); 
  digitalWrite(redLEDpin, LOW);
  delay(500); 
}
