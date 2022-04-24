// Pin for button
const int pressure_pin = A3; 

void setup() {
  Serial.begin(9600);

  // Set pressure pin
  pinMode(pressure_pin,INPUT_PULLUP);
}

void loop() {
	// Read and loop sensor value
	int sensorValue = analogRead(pressure_pin);
	Serial.println(sensorValue);
}