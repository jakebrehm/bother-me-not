
# An arduino project that lets people know if they can bother me.

![GitHub last commit](https://img.shields.io/github/last-commit/jakebrehm/bother-me-not?color=violet)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/jakebrehm/bother-me-not?color=violet)

## What does it do?

One arduino handles three different LEDs, and it communicates wirelessly with a second arduino which handles button presses.

I am able to switch between the LEDs, which are colored similarly to a traffic light, by pressing their corresponding button.

The green LED indicates that it's okay to be bother me, yellow implies that you should enter at your own risk, and red means not to enter under any circumstance.

## Why does this exist?

Due to a ton of things happening at the same time - most notably, the COVID-19 pandemic - I'm temporarily working from my parent's house.

This is all fine and dandy, but my family doesn't seem to know when it's okay to bother me; I don't need people walking in on me during a call. This is why I decided to come up with a way to tell people when they shouldn't enter my room.

## How can I make it myself?

Other than the basics (jumper wires, breadboard, etc.), you're going to need some components:
- **2x** Arduino Uno
- **2x** nRF24L01
- **3x** Momentary switches, preferably of different colors
- **3x** LEDs, preferably of different colors

Here are some schematics so that you can make your own.

<p align="center">
  <img src="https://github.com/jakebrehm/bother-me-not/blob/master/img/transmitter_schematic.png" alt="Transmitter Schematic"/>
</p>

<p align="center">
  <img src="https://github.com/jakebrehm/bother-me-not/blob/master/img/receiver_schematic.png" alt="Receiver Schematic"/>
</p>

## Future plans for this project

- Get rid of the jumpers and replace them with shorter, soldered wires
- 3D print a casing for bother arduinos
- Power the arduinos externally, perhaps with batteries
- Actually deploy the project

## Authors
- **Jake Brehm** - *Initial Work* - [Email](mailto:mail@jakebrehm.com) | [Github](http://github.com/jakebrehm) | [LinkedIn](http://linkedin.com/in/jacobbrehm)