const int redPin = 12;
const int greenPin = 11;
const int bluePin = 10;

int vRed = 225;//red value = constant number 225
// pink color for love (225, 142, 192)/(225, 199, 212)/blue(199, 204, 225)
int cGreen = A0;
int cBlue = A1;
int readGreen = 0;
int readBlue = 0;
int vGreen = 0;
int vBlue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(cGreen, INPUT);
  pinMode(cBlue, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readGreen = analogRead(cGreen);
  vGreen = map(readGreen,1,1024,1,255);//map the range of value from 1-1024 to 1-255;https://www.youtube.com/watch?v=RBYVUTIU4FE
  readBlue = analogRead(cBlue);
  vBlue = map(readBlue,1,1024,1,255);//the led and the potentiometer read different range of values

  // Serial.println(vRed);
  Serial.println(vGreen);
  Serial.println(vBlue);

  analogWrite(redPin,vRed);
  analogWrite(greenPin,vGreen);
  analogWrite(bluePin,vBlue);

  if(vGreen > 1 && vGreen < 25 && vBlue > 20 && vBlue < 90){
    Serial.println("You are my destiny!💌");
  }
}
