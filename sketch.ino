void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(21, OUTPUT);
}

void loop() {
  digitalWrite(21, HIGH);
  delay(200); // Wait for 500 millisecond(s)
  digitalWrite(21, LOW);
  delay(200); // Wait for 500 millisecond(s)
}
