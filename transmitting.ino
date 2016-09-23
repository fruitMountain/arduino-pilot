//transmitting.ino

//transmitting test1

boolean ledState = false; //this refers to the recieving LED

const int ledPin = 13; // this is an LED attached to the transmitter
int testLed = LOW; // it shows what the recieving LED should be

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); //9600 Baud or bits/sec

}

void loop()
{
  int sensorValue; // the reading off of the pot
  sensorValue = analogRead(0);


  if(sensorValue > 512) // if the pot is on the low half
  {
  Serial.write("a"); // you write "a" which turns the light off
  testLed = LOW; // the LED is off on the transmitter and reciever
  }
  else // the pot is on the higher end
  {
  Serial.write("b"); //so we are either writing "a", or "not a"
  testLed = HIGH; // both reciever and transmitter should be on
  }
  digitalWrite(ledPin, testLed); // writes the test LED
  Serial.print(sensorValue); // tells you what the pot is reading
}
