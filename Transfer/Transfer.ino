
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print('H');
  delay(4000);
  Serial.print('L');
  delay(4000);
}
