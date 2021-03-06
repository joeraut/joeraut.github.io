---
title: "Displaying smooth-scrolling text on old character LCDs"
description: "The bleeding edge of ‘80s displays?"
date: 2020-07-12
---

{{< youtube Or9oK5yfja8 >}}

*Update (17 July 2020): This got featured on [Hackaday](https://hackaday.com/2020/07/16/smoother-text-scrolling-on-hd44780-lcds/) and [Hackster News](https://www.hackster.io/news/display-smooth-scrolling-text-on-an-hd44780-lcd-009eb805e45a)!*

Character LCDs have been around for a long time. These displays contain a number of discinct blocks—each capable of displaying a single character—so displaying
scrolling text would traditionally involve just shifting characters left one block at a time.
That's fine and all, but why not try and raise the bar.. 😏

### Hardware
Most character displays utilise the [Hitachi HD44780 controller chip](https://en.wikipedia.org/wiki/Hitachi_HD44780_LCD_controller),
which has the neat feature of letting us define and use up to eight custom characters, each 5x8 pixels in size.
Mine uses this chip, so I'll be taking advantage of repeatedly rendering custom characters to pull off smooth scrolling text.

I connected an Arduino Leonardo to my [salvaged display]({{< ref "interfacing-salvaged-lcd-display.md" >}}) over its 4-bit interface, and got to work on the software side.

{{< figure src="/images/posts/smooth-scrolling-text-on-character-lcds/arduino-connection.jpg" title="Arduino connected to character LCD" >}}

### Software
As we use an Arduino, the software written is in C++. Source code available at the end of the article.

We allocate memory for a canvas that will contain the raw pixel data for the message we want to display. We make use of a
[5x7-pixel ASCII font](https://github.com/Ameba8195/Arduino/blob/master/hardware_v2/cores/arduino/font5x7.h), and for each ASCII character
in the message string, we place the corresponding character at the appropriate location on the canvas using the `memcpy` function.

In order to display our canvas on the LCD, we define a function to generate display-ready custom characters by grabbing pixel data from appropriate locations on
the canvas. For each frame of the scrolling process, we can simply increment the horizontal index of the location on the canvas by one, which results
in the message on-screen scrolling left by one pixel. These custom characters are then pushed to the display, and presto—smooth-scrolling text!

There was a slight complication I glossed over—the memory structure of custom characters differs to that of the font and canvas. The font and canvas use five
bytes to represent each character, with each byte representing one 7-pixel column (the most significant bit is ignored). The custom character format,
however, uses 8 bytes—each representing one row of the character. To solve this issue, we define a function `transpose` which takes care of mapping
the canvas format to the custom character format.

### Source code
The Arduino sketch is available here: [SmoothScrollingText.ino](/files/posts/smooth-scrolling-text-on-character-lcds/SmoothScrollingText.ino).

It should run on most Arduino devices, but I have only tested it on an Arduino Leonardo. Be sure to modify the LCD pin setup for your hardware.
