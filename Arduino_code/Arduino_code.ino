int x; //Switch CASE
int y = 50; //IO Scan Delay

void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
  while (Serial.available()) {
      int x = Serial.parseInt();
//      Serial.println(x);
        switch (x){
        case 1:
        digitalWrite(8,HIGH);
        break;
        case 2:
        digitalWrite(9,HIGH);
        break;
        case 3:
        digitalWrite(10,HIGH);
        break; 
        case 4:
        digitalWrite(11,HIGH);
        break;
        case 5:
        digitalWrite(12,HIGH);
        break;
        case 6:
        digitalWrite(13,HIGH);
        break;
        case 7:
        digitalWrite(8,LOW);
        break;
        case 8:
        digitalWrite(9,LOW);
        break;
        case 9:
        digitalWrite(10,LOW);
        break;
        case 10:
        digitalWrite(11,LOW);
        break;
        case 11:
        digitalWrite(12,LOW);
        break;
        case 12:
        digitalWrite(13,LOW);
        break;
      }
  }
  
  Serial.print("DI 1 = ");
  Serial.println(digitalRead(2));
  delay(y);
  Serial.print("DI 2 = ");
  Serial.println(digitalRead(3));
  delay(y);
  Serial.print("DI 3 = ");
  Serial.println(digitalRead(4));
  delay(y);
  Serial.print("DI 4 = ");
  Serial.println(digitalRead(5));
  delay(y);
  Serial.print("DI 5 = ");
  Serial.println(digitalRead(6));
  delay(y);
  Serial.print("DI 6 = ");
  Serial.println(digitalRead(7));
  delay(y);
  Serial.print("DO 1 = ");
  Serial.println(digitalRead(8));
  delay(y);
  Serial.print("DO 2 = ");
  Serial.println(digitalRead(9));
  delay(y);
  Serial.print("DO 3 = ");
  Serial.println(digitalRead(10));
  delay(y);
  Serial.print("DO 4 = ");
  Serial.println(digitalRead(11));
  delay(y);
  Serial.print("DO 5 = ");
  Serial.println(digitalRead(12));
  delay(y);
  Serial.print("DO 6 = ");
  Serial.println(digitalRead(13));
  delay(y);
  
  delay(1000);
}
