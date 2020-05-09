#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10);

const byte address[6] = "00001";

int greenLED = 2;
int yellowLED = 3;
int redLED = 4;

void green();
void yellow();
void red();

int state;

void setup() {

  // Initialize the LEDs
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // Start with all LEDs off
  off();

  // Initialize the receiver
  radio.begin();
  radio.openReadingPipe(1, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();

}

void loop() {
  
  if (radio.available()) {
    // Read the data from the transmitter
    radio.read(&state, sizeof(state));
    if ( state == 0 ) {
      // Turn on the green LED
      green();
    } else if ( state == 1 ) {
      // Turn on the yellow LED
      yellow();
    } else if ( state == 2 ) {
      // Turn on the red LED
      red();
    }
  }

}

void on() {
  // Turn on all LEDs
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, HIGH);
}

void off() {
  // Turn off all LEDs
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
}

void green() {
  // Turn on only the green LED;
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
}

void yellow() {
  // Turn on only the yellow LED
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, LOW);
}

void red() {
  // Turn on only the red LED
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
}
