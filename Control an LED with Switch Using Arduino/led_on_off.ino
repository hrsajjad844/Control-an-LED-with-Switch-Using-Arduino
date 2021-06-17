int swt = 13;
int led = 12;
void setup()
{
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  
    if(digitalRead(swt) == 1)
    {
    	digitalWrite(led, HIGH);
    }
  else{
       digitalWrite(led, LOW);
  }
    
}