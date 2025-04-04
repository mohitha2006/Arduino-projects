//This cuicuit rises signal (light) when any motion is detected by the PIR sensor
int ledpin=13;
int sensorpin=A0;
void setup()
{
  pinMode(ledpin,OUTPUT);
  pinMode(sensorpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorVal=digitalRead(sensorpin);
  if (sensorVal==HIGH)
  {
    digitalWrite(ledpin,HIGH);
  }
  else
  {
    digitalWrite(ledpin,LOW);
  }
}
