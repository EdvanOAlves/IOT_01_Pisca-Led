void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(18, OUTPUT);
}

void loop() {
  digitalWrite(18, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(18, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
