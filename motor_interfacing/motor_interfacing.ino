 int motor1a=4;
 int motor1b=5;
void setup()    
 {  
 pinMode(motor1a,OUTPUT);    
 pinMode(motor1b,OUTPUT);        
 Serial.begin(9600);           
 }  
 void loop()  
 {  
  digitalWrite(motor1a,HIGH);
  digitalWrite(motor1b,LOW);
    delay(1000);
digitalWrite(motor1a,LOW);
digitalWrite(motor1b,LOW);
   delay(1000);
digitalWrite(motor1a,LOW);
digitalWrite(motor1b,HIGH);
   delay(1000);
digitalWrite(motor1a,LOW);
digitalWrite(motor1b,LOW);
delay(1000);
 }
 


 


 
