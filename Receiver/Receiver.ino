
char data;
const int pin = 13;

void setup() {
  Serial.begin(115200);
  pinMode(pin,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    data = Serial.read();
    Serial.print(data);
    if(data == 'H'){
      digitalWrite(pin,HIGH);
      delay(1000);
    }
    if(data == 'L'){
      digitalWrite(pin,LOW);
      delay(1000);
    }
  }

}
