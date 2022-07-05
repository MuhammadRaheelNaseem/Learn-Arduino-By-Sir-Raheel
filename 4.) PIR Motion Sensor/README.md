# `4.) PIR Motion Sensor`

# `Circuit Diagram`

![image](https://user-images.githubusercontent.com/63813881/177358934-51dabb2a-b46a-47f6-93a2-545f817d1fec.png)

# `Code: 1`
<pre> 
int ledPin = 13;                // LED 
int pirPin = 2;                 // PIR Out pin 
int pirStat = 0;                   // PIR status
 
void setup() {
  pinMode(ledPin, OUTPUT);     
  pinMode(pirPin, INPUT);     
 
  Serial.begin(9600);
}
 
void loop(){
  
  pirStat = digitalRead(pirPin); 
   
  if (pirStat == HIGH) {            // if motion detected
    digitalWrite(ledPin, HIGH);  // turn LED ON
    Serial.println("Hey I got you!!!");

  } 
  else {
    digitalWrite(ledPin, LOW); // turn LED OFF if we have no motion
   
  }
}
</pre>

# `Code: 2`
<pre>
int sensorState = 2;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(2);
    // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Sensor activated!");
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
</pre>
