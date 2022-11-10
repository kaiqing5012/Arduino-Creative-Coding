//https://www.youtube.com/watch?v=5jeaIfJI6NM
//https://learn.adafruit.com/photocells/arduino-code

int sensorPin = A0;
int ledPin = 11;
int threshold = 5;//make a comparing variable for the light sensor
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);//get the value
  // if(sensorValue > 0){
  //   Serial.println("bright");
  // }
  // else if(sensorValue > 10){
  //   Serial.println("super bright");
  // }
  if(sensorValue > threshold){
    digitalWrite(ledPin, HIGH);
  }
  if(sensorValue < threshold){
    digitalWrite(ledPin, LOW);
  }
}
