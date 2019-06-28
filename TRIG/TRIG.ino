int TRIG =8;
int Echo =5;
float Time;
float distance ;


void setup(){
  pinMode(TRIG,OUTPUT);
  pinMode(Echo,INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
 digitalWrite(TRIG,LOW);
 delayMicroseconds (2);
 
 digitalWrite(TRIG,HIGH);
 delayMicroseconds (10);
 
 digitalWrite(TRIG,LOW);
  Time = pulseIn (Echo,HIGH);
  distance =(Time*0.0343);
  Serial.print(distance);
  Serial.println("CM");
  // put your main code here, to run repeatedly:

}
