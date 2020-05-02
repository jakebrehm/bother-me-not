int greenLED = 2; // the pin the LED is connected to
int yellowLED = 3;
int redLED = 4;

void green();
void yellow();
void red();

void (*functionPointers[])() = {green, yellow, red};

void setup() {
  pinMode(greenLED, OUTPUT); // Declare the LED as an output
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  off();
}

void loop() {
  int index = random(0, 3);
  functionPointers[index]();
  delay(1000);
}

void off() {
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
}

void on() {
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, HIGH);
}

void green() {
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
}

void yellow() {
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, LOW);
}

void red() {
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
}
