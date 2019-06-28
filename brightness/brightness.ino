
int pinpot = A0;
int LED =10;
int Brightness;
int Readvalue;
float voltage

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
 


}

void loop() {
  int readvalue;
  Readvalue = analogRead(pinpot);
  Brightness = (255./1023.)*Readvalue;
  analogWrite(REDLED,writevalue);
  delay(1000);
  
  
Serial.print("type in value ");
Serial.print("Readvaue");
Serial.print("");
Serial.println("mapped value");





}
