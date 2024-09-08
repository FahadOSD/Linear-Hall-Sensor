

// NeuralMesh Solution

#define SensorAO A0
#define SensorDO 2
#define BLUE 8
#define YELLOW 9

void setup() {
  Serial.begin(9600);
  pinMode(SensorDO, INPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void loop() {
  int valueAnalog = analogRead(SensorAO);
  bool valueDigital = digitalRead(SensorDO);
  Serial.print("Analog value :");
  Serial.print(valueAnalog );
  Serial.print("\t");
  Serial.print("Digital value :");
  Serial.println(valueDigital);
  
  if (valueDigital == 1) {
    digitalWrite(BLUE, HIGH);
    digitalWrite(YELLOW, LOW);
  } else if (valueDigital == 0) {
    digitalWrite(YELLOW, HIGH);
    digitalWrite(BLUE, LOW);
  } else {
    digitalWrite(BLUE, LOW);
    digitalWrite(YELLOW, LOW);
  }
}