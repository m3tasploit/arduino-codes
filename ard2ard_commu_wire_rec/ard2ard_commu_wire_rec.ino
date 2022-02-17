byte incomingByte;

void setup() 
{
// Serial port enable
Serial.begin(9600);
}

void loop()
{

// if there is bytes available coming from the serial port
if (Serial.available()) 
{

incomingByte = Serial.read();
Serial.println(char(incomingByte));

}
}
