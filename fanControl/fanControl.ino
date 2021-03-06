//#include <Bounce2.h>
#define relayPin 8
#define onButton 12
#define offButton 11
#define bounceInterval 5
#define debugPin 17
#define errorPin 7

//Bounce onBounce = Bounce();  
//Bounce offBounce = Bounce();  

void setup()
{

  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  pinMode(errorPin, OUTPUT);
   pinMode(debugPin, OUTPUT);
  pinMode(onButton, INPUT);

}


void loop()
{
  Serial.println("loop");

  if(digitalRead(onButton) == HIGH){
  	digitalWrite(relayPin, HIGH);
  	digitalWrite(debugPin, LOW);
   Serial.println("on");
  } else {
       Serial.println("off");
  	digitalWrite(debugPin, HIGH);
	digitalWrite(relayPin, LOW);
  }
  
}
