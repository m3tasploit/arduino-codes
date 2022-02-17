
#define trigPin 2
#define echoPin 3
int motora1=8;
int motora2=9;
int motorb1=10;
int motorb2=11;

void setup()
{
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motora1,OUTPUT);
  pinMode(motora2,OUTPUT);
  pinMode(motorb1,OUTPUT);
  pinMode(motorb2,OUTPUT);

}


void loop() 
{
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.print("cm    \n");
  
  if(distance < 20 )
  {
   
    
    digitalWrite(motorb1,LOW);
    digitalWrite(motorb2,HIGH);
    
     digitalWrite(motora1,HIGH);
    digitalWrite(motora2,LOW);

    
  }

    
  else
  {
    digitalWrite(motora1,HIGH);
    digitalWrite(motora2,LOW);
    digitalWrite(motorb1,HIGH);
    digitalWrite(motorb2,LOW);
  }
}
 

 
