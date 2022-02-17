#include <IRremote.h>

int out1=9;
int out2=8; 
int out3=10;


int RECV_PIN = A0;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);

  Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     irrecv.resume(); 
    }
 
    if(results.value==0x80412701)
    {
      digitalWrite(out1,HIGH);
      digitalWrite(out2,HIGH);
      digitalWrite(out3,HIGH);
    }
    else
    {
      digitalWrite(out1,HIGH);
      digitalWrite(out2,HIGH);
      digitalWrite(out3,HIGH);
    }
    
      

}
    
    
    
    
    
    
    
