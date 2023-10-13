void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

// float mapFloat(int value, int start, int end, int mapStart, int mapEnd) {
//   return (float)(value - start) * (mapEnd - mapStart) / (float)(end - start) + mapStart;
// }

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  // Serial.println(sensorValue);
  int speed = map(sensorValue, 280, 170, 1, 9);
  Serial.println(speed);
  delay(50);
}
