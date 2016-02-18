int light = 8;
int sense = A0;
int timetaken = 0;
void setup()
{
  pinMode(light,OUTPUT);
  pinMode(sense,INPUT);
  digitalWrite(light,HIGH);
  Serial.begin(9600);
}
void loop()
{
  int val=analogRead(sense);
  Serial.println(val);//prints value
  if(val>=900)
  {
    Serial.println("Something obstructed the sensor!");
    Serial.println(timetaken);
  }
  delay(1000);
  timetaken +=1;
  
}
