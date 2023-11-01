const int TRIG_PIN = 5;
const int ECHO_PIN = 4;
long duration;
float cms, inches;

void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
pinMode(TRIG_PIN, OUTPUT);
pinMode(ECHO_PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(TRIG_PIN,LOW);
delayMicroseconds(5);
digitalWrite(TRIG_PIN,HIGH);
delayMicroseconds(10);
digitalWrite(TRIG_PIN,LOW);

duration = pulseIn(ECHO_PIN,HIGH);

cms = (duration/2) / 29.1;
inches = (duration/2) / 74;

Serial.print(inches);
Serial.print("in, ");
Serial.print(cms);
Serial.print("cm");
Serial.println();

delay(250);
}


