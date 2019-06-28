int LEDRED = 7;
int LEDGREEN  = 8;


void setup() {
  Serial.begin(9600);
 pinMode ( LEDRED,OUTPUT);
 pinMode (LEDGREEN,OUTPUT);
 Serial.println(" This is my number # program");
 Serial.println(" ");
 // put your setup code here, to run once:

}

void loop() {
  Serial.println("Blink # 1 is red");
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  delay(1000);
  

  
  Serial.println("Blink # 2 is Green");
  digitalWrite (LEDGREEN,HIGH);
  delay(1000);
  digitalWrite (LEDGREEN,LOW);
  delay(1000);
  

  digitalWrite (LEDGREEN,HIGH);
  delay(1000);
  digitalWrite (LEDGREEN,LOW);
  delay(1000);

  
 
   Serial.println("Blink # 3 is Red");
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,LOW);
  delay(1000);

  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);

  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite (LEDRED,HIGH);
  delay(1000);

  Serial.println(" ");
  // put your main code here, to run repeatedly:

}
