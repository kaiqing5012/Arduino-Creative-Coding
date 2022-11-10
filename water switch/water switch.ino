void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,LOW);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(7,HIGH);
  delay(500);
}
