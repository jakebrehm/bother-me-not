#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10);

const byte address[6] = "00001";

int greenButton = 2;
int yellowButton = 3;
int redButton = 4;

int state;

void setup() {
  
  // Initialize the buttons
  pinMode(greenButton, INPUT);
  pinMode(yellowButton, INPUT);
  pinMode(redButton, INPUT);

  // Initialize the transmitter
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

}

void loop() {

  // Send a message to the receiver if a button is pressed
  if ( digitalRead(greenButton) == HIGH ) {
    state = 0;
    radio.write(&state, sizeof(state));
  } else if ( digitalRead(yellowButton) == HIGH ) {
    state = 1;
    radio.write(&state, sizeof(state));
  } else if ( digitalRead(redButton) == HIGH ) {
    state = 2;
    radio.write(&state, sizeof(state));
  }

}
