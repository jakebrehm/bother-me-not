int greenLED = 2; // the pin the LED is connected to
int yellowLED = 3;
int redLED = 4;

int greenButton = 6;
int yellowButton = 7;
int redButton = 8;

void green();
void yellow();
void red();

void (*functionPointers[])() = {green, yellow, red};

void setup() {
  Serial.begin(9600);
  
  pinMode(greenLED, OUTPUT); // Declare the LED as an output
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(greenButton, INPUT);

  off();
}

void loop() {
//  int index = random(0, 3);
//  functionPointers[index]();
//  delay(250);

  if ( digitalRead(greenButton) == HIGH ) {
    green();
  } else if ( digitalRead(yellowButton) == HIGH ) {
    yellow();
  } else if ( digitalRead(redButton) == HIGH ) {
    red();
  }

  Serial.println(digitalRead(greenButton));

  delay(50);

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
