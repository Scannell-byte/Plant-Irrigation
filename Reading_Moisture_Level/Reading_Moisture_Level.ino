#define SensorPin1  A0
#define DigitalPin1 13
#define Dry  554
#define Wet  200
float percentageDenom = Dry - Wet; 
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); 
   pinMode(DigitalPin1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int actualMoisture = analogRead(SensorPin1);
  float percentageNum = actualMoisture - Wet;
  float relativeMoisture = 100*(1 - percentageNum/percentageDenom);
  Serial.println(actualMoisture);
  digitalWrite(DigitalPin1,LOW);

}
