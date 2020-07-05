---
title: "SANReN Cyber Security Challenge 2017"
description: "A report on a fantastic contest"
date: 2017-12-10
---

As part of Team BitPhase from Stellenbosch University, we made it to the final round of the inaugural 2017 SANReN Cyber Security Challenge in early December 2017, hosted in parallel with the annual 2017 CHPC Conference. We were fortunate to leave as the winning team of the Main challenge!

Several days of awesome work for the Main challenge included reverse-engineering applications such as a fake bank app with the goal of transferring money from other fake accounts into their own, inspecting executables and ridiculously obfuscated code, cracking RSA encryption from a partial key, using steganographic and forensic techniques to retrieve data from innocent looking images or files that appeared damaged, identifying rootkits in a memory dump, as well as many other Capture the Flag-like challenges. Additional challenges took place such as the Hash challenge which involved cracking as many passwords as possible from a dump of password hashes, and the Snowden challenge which involved social engineering!

A personal favourite challenge of mine within the Main challenge was titled “Manchester”; we were told some data would be encoded with Manchester encoding! A single file was provided with seemingly meaningless raw data, which turned out to be a raw data dump from an SDR (Software Defined Radio) system. Loading the raw data into GNURadio, throttling and sinking it to a Wav file and playing it back resulted in audible beeps of a particular frequency that sounded similar to Morse code (aha: Manchester encoding!)
A script was whipped up to detect and convert the single-frequency beeps to a bitstream, and this was converted to ASCII text – Flag captured!

Out of eight teams in the finals, we came first place in the Main challenge! Congratulations to the other teams as well as those that won the separate hashing and Snowden challenges. All in all, it was a ton of fun with an awesome team and something I’d definitely do again. Bring it on, 2018!

![Main](/img/posts/sanren-csc-2017/IMG_3502.jpg "Main")

![Main](/img/posts/sanren-csc-2017/image12.jpg "Main")

Above: Our BitPhase team members receiving prizes. From left to right: Jonathan Botha, Luke Joshua, Joseph Rautenbach, and Nicolaas Weideman.

![Main](/img/posts/sanren-csc-2017/IMG_3517.jpg "Main")
