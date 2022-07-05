# `2.) Button`

# `Circuit Diagram:`

![image](https://user-images.githubusercontent.com/63813881/177355899-0c5b595d-68bc-4cc3-9eaa-6519cd63cf30.png)

# `Code: 1`
<pre>
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
</pre>
# `OR`
<pre>
void setup() {
Serial.begin(9600);
 pinMode (13, OUTPUT);
 pinMode (8 , INPUT_PULLUP);

}

void loop() {
int button = digitalRead(8);

 if (button == LOW ){
  digitalWrite(13,HIGH);
  Serial.println(button);
 }

 else {
  digitalWrite(13 , LOW);
    Serial.println(button);

 }

}
</pre>

![image](https://user-images.githubusercontent.com/63813881/177355954-64c8827e-25b1-49ef-ac2b-d8983615cad6.png)

# `Code: 2`
<pre>
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  4;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
</pre>

![image](https://user-images.githubusercontent.com/63813881/177356026-e36c5c05-3c20-4819-af6a-606078f809aa.png)

# `Code: 3`
<pre>
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
</pre>
