# include <Servo.h>
int servoPin = 3;
int servoPos;
Servo myServo;
int lightPin = A2;
int lightVal;


void setup()
{
  pinMode(lightPin, INPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(500);
  servoPos = (180./673.)*(lightVal - 6);
  myServo.write(servoPos);
}
