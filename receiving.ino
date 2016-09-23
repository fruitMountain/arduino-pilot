//receiving.ino

//recieving test1

const int ledPin = 13; // the toggle of the LED indicates that the transmission
                       //is working
int ledState = LOW; //This is whether or not the LED is on or off

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // 9600 Baud or bits/sec
}


void loop()
{
  if(Serial.available() > 0) /* Serial.available() returns the number of bytes
                             in the Serial buffer, a memory buffer used to hold
                             bits comming in over the recieving pin, you can put
                              in data types to the () and get back the number as
                               different types, check the Serial notation*/
  {
    char c = Serial.read(); // char c is the bits comming in from the Serial buffer

    if(c == "a") // if Im sending "a" dont turn on the light
    {
      ledState = LOW;
    }
    else /* if im sending "b" or anything else turn it on, this is in case of
        corruption causing me to read weird char values*/
    {
      ledState = HIGH;
    }
  }
  digitalWrite(ledPin, ledState); //when its done it tells the LED what to do
}
