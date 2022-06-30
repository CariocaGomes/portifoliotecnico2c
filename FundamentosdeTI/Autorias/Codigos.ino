void setup() {

pinMode(11, OUTPUT);

Serial.begin(9600);
}

void loop(){
  int var = analogRead(10);
  Serial.println(var);

  if (var > 300) {
  tone(11,249);
  }
else {
  noTone(11);
}

}
