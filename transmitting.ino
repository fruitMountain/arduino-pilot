//transmitting.ino

void setup() {
Serial.begin(9600);

pinMode(13, OUTPUT);
}

void loop() {
digitalWrite(13,HIGH);
transmit();
delay(1000);
digitalWrite(13,LOW);
transmit();
delay(1000);
}

void transmit() {
  Serial.write('a');
  Serial.write('b');
}
