
 int LEDGREEN = 8;
 int ReadValue;
 int PIR = 5;
 
 
 void setup() {
  
  pinMode(PIR,INPUT);
  pinMode (LEDGREEN,OUTPUT);
 

  // put your setup code here, to run once:

}

void loop() {
  ReadValue = digitalRead(PIR);
  
  if(ReadValue == HIGH)
  {digitalWrite(LEDGREEN,HIGH);
  delay (1000);

  }
   
   else{}
  
  // put your main code here, to run repeatedly:

}
