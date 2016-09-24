//receiving.ino


//receiving test 2

void setup() {
Serial.begin(9600);
}

void loop() {
if(Serial.available() > 0)
  {
    char c = Serial.read();
    Serial.println(c); // print anything recieved


   // Serial.println("it works");
  }
}
