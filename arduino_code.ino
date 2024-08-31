// Define the LED pins
const int ledPin15 = 15;
const int ledPin2 = 2;
const int ledPin4 = 4;
const int ledPin5 = 5;

void setup() {
  // Set the LED pins as output
  pinMode(ledPin15, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  //digitalWrite(ledPin15, 1);
  //digitalWrite(ledPin2, 1);
  //digitalWrite(ledPin4, 0);
  //digitalWrite(ledPin5, 0);
}

void loop() {
  // Set the brightness to 25% (64 out of 255)
  digitalWrite(ledPin15, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);

  delay(10000); // Wait for 10 seconds to observe the dimming level
}
