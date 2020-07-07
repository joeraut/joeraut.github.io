---
title: "Bitmap images on character LCDs"
description: "Displaying bitmaps on HD44780-based displays"
date: 2013-10-27
---


![Final](/images/posts/bitmap-images-on-character-lcds/IMG_1062.JPG "Final")

Character LCDs are displays that consist of many character “blocks”, and each block can display a letter, number, etc.
A display controller in widespread use is the Hitachi HD44780 driver. I have talked about this in a previous post on reverse engineering a printer LCD.

HD44780-based character LCDs usually come in common sizes such as 16×2 (16 characters per line, two lines), 8×2, 20×2 20×4, using the 8-bit ASCII character set.
Interestingly enough, the HD44780 chip allows up to 8 custom characters to be defined. These can contain any bitmap data, and can be updated as often as you like.

With this in mind, we can construct basic bitmap images for the display, with a resolution of 20×16 pixels if we have four custom characters per line, occupying two lines, 15×16 if we have three per line on two lines (two are still available but not used) or a 40×8 display if we put all eight on one line.
However, there is a gap between each character so images will have gaps, and symmetry can get messed up if you don’t design it correctly.

I connected a standard 16×2 character LCD to my Arduino via a Proto Shield (excuse the messy wiring) and hacked together some code for the custom characters.
I have created a very low-resolution version of the Hack a Day logo for their Trinket competition. The goal is to put their logo in interesting places. Nobody has done this before, so I figured it would be fun to try out.

Here’s the original image for a comparison:

![Hack a Day logo](/images/posts/bitmap-images-on-character-lcds/hackaday_logo.jpg "Hack a Day logo")

My final logo ended up using six of the custom characters for a 15×16 pixel resolution (3×2 resolution in characters) as there are things in the centre which are split in the character gaps so four characters per line can’t work. I finally had to do it this way after too much trial and error using all 8 characters for a 20×16 resolution.

![Final](/images/posts/bitmap-images-on-character-lcds/IMG_1057.JPG "Final")

## Downloads

The Arduino sketch to draw the logo is available [here](/files/posts/bitmap-images-on-character-lcds/lcd_hackaday.ino).

## Conclusion

I think the result turned out quite nicely considering the limitations of the display.