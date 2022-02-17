 int motor1a=4;
 int motor1b=5;
 int motor2a=6;
 int motor2b=7;
                 
 int senRead1=0; 
 int senRead2=1;                
 int limit=850;                  
 void setup()    
 {  
 pinMode(motor1a,OUTPUT);    
 pinMode(motor1b,OUTPUT);    
 pinMode(motor2a,OUTPUT);    
 pinMode(motor2b,OUTPUT);     
  Serial.begin(9600);           
 }  
 void loop()  
 {  
  int val1=analogRead(senRead1); 
  int val2=analogRead(senRead2); 
  Serial.println(val1);
 Serial.println(val2); 
 
 if(val1 < 500)
 {
  digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,LOW);
 }
  if(val2 < 500)
 {
  digitalWrite(motor2a,HIGH);
  digitalWrite(motor2b,LOW);
 }
 


 

  if(val1 > 500)
 {
  digitalWrite(motor1a,LOW);
  digitalWrite(motor1b,LOW);

  
 }
  if(val2 > 500)
 {
  digitalWrite(motor2a,LOW);
  digitalWrite(motor2b,LOW);
 }
 
 }
 
   
       
