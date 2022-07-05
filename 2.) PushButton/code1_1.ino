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
