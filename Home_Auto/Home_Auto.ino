char data = 0;
int light=4;
int fan=5;            
void setup() 
{
  Serial.begin(9600);        
  pinMode(13, OUTPUT);
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);  
}
void loop()
{
  if(Serial.available() > 0) 
  {
    data = Serial.read();  
    Serial.print(data);    
    Serial.print("\n");       
    if(data == '2')           
     { 
      digitalWrite(fan,HIGH); 
      }
    else if(data == '3')      
      {
      digitalWrite(fan,LOW); 
      }
      else if(data=='1'){
      digitalWrite(light, HIGH); 
      }
        
      else if(data=='0'){
      digitalWrite(light, LOW); 
      }
  }                            
 
}
