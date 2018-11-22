// Ultrasonic Sensors works on the principle of Sonar Effect.


int EcoPin = 7; // Defines the pins which are being used
int TrigPin = 6;
long distance;
long duration;
void setup() 
{
   Serial.begin(9600);  // starts communication between board and computer 
   pinMode(TrigPin,OUTPUT); // pin will give output to the computer
   pinMode(EcoPin,INPUT);  //pin will recieve input from ultrasonic sensors
}
void loop() // codes written under loop function will repeats itselves continiously
{

  
digitalWrite(TrigPin, LOW);    
delayMicroseconds(2);

digitalWrite(TrigPin, HIGH);
delayMicroseconds(10);

digitalWrite(TrigPin, LOW);
 
duration = pulseIn(EcoPin,HIGH);  //records the total time taken by sound wave in striking back the sensors after reflection 
distance= (duration*0.034)/2;
Serial.println(distance); //displays the distance 
 

}
