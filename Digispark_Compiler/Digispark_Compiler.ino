void setup() {                

  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUZZZ); //LED on Model A   
}

void loop() {
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(1000); wait for a second
}
