#define redPin 2
#define ambPin 3
#define grnPin 4

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(ambPin, OUTPUT);
  pinMode(grnPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(redPin, LOW);
  
  digitalWrite(ambPin, HIGH);
  delay(4000);
  digitalWrite(ambPin, LOW);

  digitalWrite(grnPin, HIGH);
  delay(random(10000, 30000));
  digitalWrite(grnPin, LOW);
}
