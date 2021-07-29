int ledpin1 = D5;
int ledpin2 = D4;
int ledpin3 = D3;

void setup() {
  // put your setup code here, to run once:
pinMode (ledpin1, OUTPUT);
pinMode (ledpin2, OUTPUT);
pinMode (ledpin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin1, HIGH);
digitalWrite(ledpin2,LOW);
digitalWrite(ledpin3,LOW);
delay(700);


digitalWrite(ledpin1,LOW);
digitalWrite(ledpin2, HIGH);
digitalWrite(ledpin3,LOW);
delay(700);

digitalWrite(ledpin1,LOW);
digitalWrite(ledpin2,LOW);
digitalWrite(ledpin3, HIGH);
delay(700);
}
