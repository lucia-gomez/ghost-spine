void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  // Serial.println(sensorValue);
  int speed = map(sensorValue, 400, 140, 1, 9);
  Serial.println(speed);
}
