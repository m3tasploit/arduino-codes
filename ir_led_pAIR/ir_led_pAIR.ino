 int pd=2;                      
 int buzz=13;                  
 int senRead=0;                 
 int limit=850;                  
 void setup()    
 {  
  pinMode(pd,OUTPUT);  
  pinMode(buzz,OUTPUT);  
  digitalWrite(pd,HIGH);     
  digitalWrite(buzz,LOW);       
  Serial.begin(9600);           
 }  
 void loop()  
 {  
  int val=analogRead(senRead);  
  Serial.println(val);         
  if(val <= limit)            
  {  
   digitalWrite(buzz,HIGH);    
   delay(20);  
  }  
  else if(val > limit)        
  {  
   digitalWrite(buzz,LOW);     
   delay(20);  
  }  
 }  

 
