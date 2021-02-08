void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(96000);
}

void loop()
{
  int ldr = analogRead(A0);
  if(ldr > 500){
  digitalWrite(13, HIGH);
  }
  else{
  digitalWrite(13, LOW);
  }
  Serial.println(ldr);
  delay(1000);
  }