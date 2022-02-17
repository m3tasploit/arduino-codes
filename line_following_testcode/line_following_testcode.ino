                 
 int senRead1=0; 
 int senRead2=1;                
 int limit=850;                  
 void setup()    
 {  
      
  Serial.begin(9600);           
 }  
 void loop()  
 {  
  int val1=analogRead(senRead1); 
  int val2=analogRead(senRead2);
  delay(100); 
   Serial.println("val1=");
  Serial.println(val1);
   Serial.println("\n");
   delay(100); 
   Serial.println("val2=");
     Serial.println(val2); 
    Serial.println("\n");       
 delay(1000);
 }  

 
