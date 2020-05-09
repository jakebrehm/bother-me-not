
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
- **2x** [Arduino Unos](https://www.amazon.com/gp/product/B008GRTSV6/ref=ppx_yo_dt_b_asin_title_o03_s00?ie=UTF8&psc=1)
- **2x** [NRF24L01 Wireless Transceivers](https://www.amazon.com/gp/product/B07SGJ8CM5/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1)
- ***2x** [NRF24L01 Breakout Adapters](https://www.amazon.com/Makerfire-NRF24L01-Breakout-Regulator-Wireless/dp/B01IK9GCPE/ref=sr_1_2?crid=WBRA0JAS5J23&dchild=1&keywords=nrf24l01+adapter&qid=1588989619&s=electronics&sprefix=nrf24l01+ada%2Celectronics%2C152&sr=1-2) (optional)*
- **3x** [Momentary switches](https://www.amazon.com/gp/product/B01E38OS7K/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1), preferably of different colors
- **3x** [LEDs](https://www.amazon.com/gp/product/B0739RYXVC/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1), preferably of different colors

Here are some schematics so that you can make your own:

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