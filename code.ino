#define SOIL_PIN 34
#define RELAY_PIN 26

const int DRY_THRESHOLD = 2600;
const int WET_THRESHOLD = 1800;

const int RELAY_ON = LOW;
const int RELAY_OFF = HIGH;

bool watering = false;

void setup() {
  Serial.begin(115200);

  digitalWrite(RELAY_PIN, RELAY_OFF);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, RELAY_OFF);

  Serial.println("Smart Irrigation System Started");
}

void loop() {
  int moisture = analogRead(SOIL_PIN);

  Serial.print("Soil Moisture ADC: ");
  Serial.println(moisture);

  if (moisture > DRY_THRESHOLD) {
    watering = true;
  } else if (moisture < WET_THRESHOLD) {
    watering = false;
  }

  if (watering) {
    digitalWrite(RELAY_PIN, RELAY_ON);
    Serial.println("Dry Soil - Relay ON");
  } else {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    Serial.println("Moist Soil - Relay OFF");
  }

  delay(1000);
}
