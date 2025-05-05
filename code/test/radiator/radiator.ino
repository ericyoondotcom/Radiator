const int NUM_STEPS = 5373; // step angle: 0.067deg
const int DIRECTION_PIN = 2;
const int STEP_PIN = 3;

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIRECTION_PIN, OUTPUT);
}
void loop() {
  digitalWrite(DIRECTION_PIN, HIGH);

  for(int i = 0; i < NUM_STEPS; i++)
	{
		digitalWrite(STEP_PIN, HIGH);
		delayMicroseconds(500);
		digitalWrite(STEP_PIN, LOW);
		delayMicroseconds(500);
	}
	delay(1000);

  digitalWrite(DIRECTION_PIN, LOW);

  for(int i = 0; i < NUM_STEPS; i++)
	{
		digitalWrite(STEP_PIN, HIGH);
		delayMicroseconds(500);
		digitalWrite(STEP_PIN, LOW);
		delayMicroseconds(500);
	}

	delay(1000);
}