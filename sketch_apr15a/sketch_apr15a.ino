int pinpot=A0;
int REDLED;
int Readvalue;
float writeValue;
float voltage;



void setup() {
  Serial.begin(9600);
  pinMode( pinpot, INPUT);
  // put your setup code here, to run once:

}

void loop() {
   int Readvalue;
  Readvalue=analogRead(pinpot);

  writeValue=(900./1023.)*Readvalue;
  voltage=(5./1023.)*Readvalue;
  analogWrite(REDLED,writeValue);
  delay(1000);


  Serial.print("typinValue");
  Serial.print(Readvalue);
  Serial.print("");
  Serial.println("mapped values");
  // put your main code here, to run repeatedly:

}
