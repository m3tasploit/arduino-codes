char data = 0;
int ma1=4;
int ma2=5;
int mb1=6;
int mb2=7;            
void setup() 
{
  Serial.begin(9600);        
  pinMode(13, OUTPUT);
  pinMode(ma1, OUTPUT);
  pinMode(ma2, OUTPUT);
  pinMode(mb1, OUTPUT);
  pinMode(mb2, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0) 
  {
    data = Serial.read();  
    Serial.print(data);    
    Serial.print("\n");       
    if(data == 'R')  //right         
     { 
      digitalWrite(mb1, HIGH); 
      digitalWrite(mb2,HIGH); 
      digitalWrite(ma1, HIGH); 
      digitalWrite(ma2,LOW);
     }
    else if(data == 'L')   //left   
      {
      digitalWrite(mb1, HIGH); 
      digitalWrite(mb2,LOW); 
      digitalWrite(ma1, LOW); 
      digitalWrite(ma2,LOW);   
      }
      else if(data=='F'){ //forward
      digitalWrite(mb1, HIGH); 
      digitalWrite(mb2,LOW); 
      digitalWrite(ma1, HIGH); 
      digitalWrite(ma2,LOW);
        }
        
      else if(data=='B'){ //backward
      digitalWrite(mb1, LOW); 
      digitalWrite(mb2,HIGH); 
      digitalWrite(ma1, LOW); 
      digitalWrite(ma2,HIGH);
        
        }
      else if(data=='S'){ //stop
      digitalWrite(mb1, LOW); 
      digitalWrite(mb2,LOW); 
      digitalWrite(ma1, LOW); 
      digitalWrite(ma2,LOW);
        }
  }                            
 
}
