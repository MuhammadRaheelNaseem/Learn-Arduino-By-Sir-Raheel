# `Let's Start Programming:`
# `1.) LED`


# `Code: 1`
# `For Only Built-In LED`
<pre>
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

</pre>


# `Circuit Diagram:`

![image](https://user-images.githubusercontent.com/63813881/177355354-f7ee8a0e-86a8-4963-bc77-e9b6d2eb7253.png)

# `Code: 2`
<pre>
int led = 8;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
</pre>

# `Circuit Diagram:`

![image](https://user-images.githubusercontent.com/63813881/177355396-712665ba-526f-487f-bf00-d124977398eb.png)

# `Code: 3`
<pre>
int led = 13;
int led2 = 12;
int led3 = 11;

// the setup routine runs once when you press reset:
void setup() {               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() 
  {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(100); 
  {
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);
    }
  {
    digitalWrite(led3, HIGH);
    delay(100);
    digitalWrite(led3, LOW);
    delay(100);
    }// wait for a second
}
</pre>
