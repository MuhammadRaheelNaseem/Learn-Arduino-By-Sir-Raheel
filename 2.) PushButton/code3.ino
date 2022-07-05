int LED = 4;
int POT = A0; // <--- NOTE: Analog

// run once
void setup()
{
  // set the LED pin (3) to be output
  pinMode(LED,OUTPUT);
  //Serial.begin(9600); // uncomment if you want to see values in serial monitor
}

// do this forever
void loop()
{
  // analogRead the pin and map the
  // value to a range that the output 
  // can understand
  int inVal = map(analogRead(POT),0,1024,0,255);

  // set the value of the pwm on pin 3
  analogWrite(LED,inVal);

  //Serial.println(inVal); // uncomment if you want to see values in serial monitor
}
