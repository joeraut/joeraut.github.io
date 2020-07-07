---
title: "Building a temperature-controlled Peltier Mini Fridge"
description: "A DIY mini fridge built on a budget"
date: 2015-04-03
---


![Main](/images/posts/peltier-mini-fridge/main.jpg "Main")

**Update:** [Project featured on Hackaday.com!](https://hackaday.com/2015/04/03/building-your-own-mini-fridge/)

I recently finished up on my Peltier Mini fridge project, and it works great!
It can cool down whatever you want that’ll fit in it – six 330ml cans for example – and can get down to –2.1°C!
Watch the video for a full description and how it works. I gotta say, it’s really cool, excuse the pun!

<iframe id="ytplayer" type="text/html" width="640" height="360"
  src="https://www.youtube.com/embed/ML7tr-2YvR8"
  frameborder="0"></iframe>

It is built using a Peltier Thermoelectric cooler module which is a ceramic plate but with many p and n-type semiconductors placed in series inside it. Here’s an image of one:

![Peltier TEC](/images/posts/peltier-mini-fridge/peltier_cooler.png "Peltier TEC")

When powered, it acts as a heat pump where one side becomes extremely cold and the other extremely hot. To make use of the cooling a heatsink will need to be put on the hot side to dissipate the heat which is being removed from the “cold” side.
When this is done, extremely cold temperatures can be reached. When running at 12V and 3.5A, I measured around –15°C on the bare side, although you could go colder with more heat dissipation on the hot side and a more powerful Peltier cooler module.

With the heatsinks mounted (be sure to use thermal paste!) and a suitable polystyrene enclosure chosen, everything fit together perfectly and worked great.

![Fridge](/images/posts/peltier-mini-fridge/top.jpg "Fridge")

To control temperature a temperature controller was purchased from eBay, here is what it looks like installed:

![Controller](/images/posts/peltier-mini-fridge/temp_controller.png "Controller")

It is powered by the 12V supply and the relay output switches the Peltier cooler module and fans, and can maintain the temperature quite well. Its thermistor probe is located inside the cool box for reading the temperature as seen here (the cylindrical probe on the left):

![Inside](/images/posts/peltier-mini-fridge/inside.jpg "Inside")

I powered it using a modified ATX power supply from an old computer, for the 12V output. The fridge draws around 3.5A when the Peltier module is on.

## Resources used

* Peltier cooler module: [eBay](http://www.ebay.com/sch/i.html?_nkw=peltier+cooler)
* Temperature controller: [eBay](http://www.ebay.com/sch/i.html?_nkw=temperature+controller+12V)
* Heatsinks – salvaged from old computers and electronics, otherwise at computer stores
* Aluminium spacing blocks – salvaged from an old, broken Peltier-based camping fridge
* Power supply – see below

I would recommend a 12V power supply capable of supplying 5A of current, as it’s generally a bad idea to operate power supplies at near full capacity for long periods of time, so 5A is a good figure, these shouldn’t be too hard to find; I actually used a PC ATX Power Supply that I modified to give 12V output, found in any desktop computer or at computer stores. [Instructions to modify](http://www.wikihow.com/Convert-a-Computer-ATX-Power-Supply-to-a-Lab-Power-Supply). These can supply >10A – more than enough power for this project – in fact, one *could* actually run two or three Peltier coolers.

## Conclusion

This project worked out great, although many Peltier fridge projects fail as they don’t end up reaching the desired temperature. A common problem is not having proper insulation or the enclosure being too big for the size of Peltier module they are using – don’t oversize your container.

Unfortunately this system is nowhere near as efficient as a standard refrigeration system with a compressor, etc., however it's very cheap and easy to build, as well as near silent.

For me it gets the job done and it’s worked well on a camping trip already! A huge success.