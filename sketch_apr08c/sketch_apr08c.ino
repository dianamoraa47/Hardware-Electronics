int LEDRED = 10;



 void setup(){
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);

 }
 
void loop() {
analogWrite (LEDRED,113);
delay(1000);
analogWrite (LEDRED,0);
delay(1000);

}
