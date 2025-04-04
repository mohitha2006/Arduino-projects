//This circuit uses a potentiometer to adjust the speed(rpm)of the DC motor
int pin1 = 9;  
int analoginp = A0;   

void setup() {
  pinMode(pin1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(analoginp);   
  int pwmVal = map(sensorVal, 0, 1023, 0, 255);    

  analogWrite(pin1, pwmVal);   
}
