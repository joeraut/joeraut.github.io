---
title: "Interfacing with a salvaged LCD character display"
description: "Reverse-engineering an old printer LCD"
date: 2013-05-27
---


![Final](/img/posts/interfacing-salvaged-lcd-display/IMG_07481.jpg "Final")

A few weekends ago I got hold of an old broken Canon printer/scanner combo. It featured a pretty neat looking 20x2 character LCD display. Let's get it working!

## Reverse engineering

When removing the display, I noticed something very interesting in that the display was just a glass panel and had a ribbon cable attached to it that had only 14 pins. This meant that there was something special with this display in that the display circuitry for driving the display was all built inside the glass – known as a *Chip on Glass* display. Normally you find these LCD displays with 60 connections or more, as the multiplexing and driving circuitry is not attached to the glass.

Now here’s why I actually decided to try to actually get this display working in the first place. When I realised there was no circuit board behind the LCD panel as you would normally find with a few driver chips and/or recognisable components, I thought it would be using a proprietary command set for interfacing with an SPI or I2C bus, and would be impossible to sniff and decode the data as the printer was broken and did not power on.
As I counted the pins on the ribbon cable I realised that it had 14 pins. This is a very coincidental number as standard HD44780-based character LCD displays use this exact number of pins (plus two for the backlight so it’s 16, but here there isn’t one).

## Wiring it up

![Pinout table](/img/posts/interfacing-salvaged-lcd-display/pinout_table.jpg "Pinout table")

Looking at the pinout for normal HD44780-based LCDs, the first three pins are responsible for power and the contrast adjustment. I decided to try to wire up these three pins and see what happens. I connected pin 1 to Ground, pin 2 to +5V and pin 3 as the contrast adjustment through a potentiometer from Ground to 5V.

As expected, the first line went solid black which HD44780 LCDs do before you send them data, which proved my theory. I then spent far too much time in actually getting it to work.
Here are my initial connections to the printer circuit board that has the ribbon cable connector for the display:

![Breadboard](/img/posts/interfacing-salvaged-lcd-display/IMG_0743.jpg "Breadboard")
![Breadboard](/img/posts/interfacing-salvaged-lcd-display/IMG_07451.jpg "Breadboard")

I tried connecting up the LCD in 4-bit mode using the LiquidCrystal Arduino library, but only random characters and symbols were displayed on the LCD.

![Junk data](/img/posts/interfacing-salvaged-lcd-display/IMG_0768.jpg "Junk data")

I knew this meant there was something wrong with the wiring or something else weird, so I tried connecting it up in 8-bit mode and to no avail. I randomly tried swapping pins around until finally when RS and RW were swapped (pin 4 and 5), it came to life!

![Valid text](/img/posts/interfacing-salvaged-lcd-display/IMG_0772.jpg "Valid text")

I was *quite* happy in knowing this darn thing actually works!
I built up a small breakout board so it could easily fit on a breadboard. I cut off a section from the printer PCB with the ribbon cable connecter, glued it to the breakout board and soldered connections from it, then put on a small potentiometer for the contrast adjustment.
Here are some pictures of how it turned out:

![Final](/img/posts/interfacing-salvaged-lcd-display/IMG_07581.jpg "Final")

![Final](/img/posts/interfacing-salvaged-lcd-display/IMG_0760.jpg "Final")

I then decided to do a “mini-project” just to do something semi-useful: a temperature display.
A quick program was conjured up to read the temperature from a LM35 temperature sensor and display the value to the display (in Celsius). This is what's shown at the top of this post.

One more thing that I thought would be interesting is seeing the ASCII character set that the LCD uses. I figured since this display was probably designed for printers or similar consumer devices, it would have some interesting characters built in, and it did!

It has symbols for arrows, some bar graphs, rounded icons and also some Russian (I think?) chracters.

Here's a pinout of the display from my experimentation, with pins numbered from left to right:

Pin | Function
--- | ---
1   | Ground
2   | Contrast – Connect to 5V for full contrast. Connect via a pot to Ground and 5V.
3   | +5V power supply
4   | RW
5   | RS
6   | Enable
7   | Data 1
8   | Data 2
9   | Data 3
10  | Data 4
11  | Data 5
12  | Data 6
13  | Data 7
14  | Data 8

## Conclusion

Overall it was a good learning experience in getting it working, and I really enjoyed it.

Now, I really need to think of a proper project to use this in...