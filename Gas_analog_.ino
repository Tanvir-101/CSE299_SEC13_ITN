#define gas (A0) // define gas sensor pin
int lvl;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    lvl = analogRead(gas); //gets gas sensor value
    Serial.println(lvl); //send gas level
    delay(2000);

}
