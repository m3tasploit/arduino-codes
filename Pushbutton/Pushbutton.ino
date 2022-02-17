int button= 10;
int flag;
void setup()
{
pinMode(button,INPUT);
}

void loop() 
{
flag=digitalRead(button);

if(flag==HIGH)
{
  digitalWrite(12,HIGH);
}
else
{
  digitalWrite(12,LOW);
}
}
