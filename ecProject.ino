int flameSensorPin = 4;      
int beeperCircuitPin = 8;
//int led_pin = 2;
 
int flame_pin = HIGH;
 
 
void setup()
{
//  pinMode(led_pin, OUTPUT);            
  pinMode(flameSensorPin, INPUT);     
  pinMode(beeperCircuitPin, OUTPUT);          
  Serial.begin(9600);                   
}
 
 
void loop()
{
  flame_pin = digitalRead(flameSensorPin);         
  if (flame_pin == LOW)                               
  {
    Serial.println("FLAME, FLAME, FLAME");
    digitalWrite(beeperCircuitPin, HIGH);                     

  }
  else
  {
    Serial.println("no flame");
    digitalWrite(beeperCircuitPin, LOW);                      
}
