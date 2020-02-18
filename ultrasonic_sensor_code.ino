const int trigPin = A2;

const int echoPin = A4;

int led1=13;
int led2=12;
int led3=11;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);}

void loop()

{

float duration, inches, cm;


digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);



duration = pulseIn(echoPin, HIGH);



cm = duration *340/20000;

if ( cm>50 )
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}
else if ( cm<50 && cm >20 )
{
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
}
else if ( cm<20 )
{
  
  digitalWrite(led3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}
}
