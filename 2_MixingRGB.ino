//This Circuit used a RGB Light bulb to create different colours
int red=11;
int blue=10;
int green=9;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int r=analogRead(A0);
  int b=analogRead(A1);
  int g=analogRead(A2);
  r=map(r,0,1023,0,60);
  b=map(b,0,1023,0,60);
  g=map(g,0,1023,0,60);
  analogWrite(red,r);
  analogWrite(blue,b);
  analogWrite(green,g);
}
