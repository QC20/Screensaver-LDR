// Pin assignment
const int ldrPin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from LDR
  int lightIntensity = analogRead(ldrPin);
  
  // Print the light intensity value to the serial monitor
  Serial.println(lightIntensity);
  
  // Delay before taking the next reading
  delay(1000);
}
