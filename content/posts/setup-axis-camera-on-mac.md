---
title: "Setting up an Axis IP camera directly connected to a Mac via Ethernet"
description: "No crossover cable required!"
date: 2019-09-08
---

I managed to get hold of a (very!) old [Axis 207W](https://www.axis.com/products/axis-207w) IP camera, and faced an interesting challenge:
I needed it to connect to my WiFi network, but configuring its WiFi settings requires an Ethernet connection.

As I didn't have an Ethernet switch or router at my university flat, I decided to try connecting it _directly_ via Ethernet to my Macbook Pro, using a Thunderbolt to Ethernet adapter – no special crossover cable needed!
With fingers crossed, I plugged the camera directly into the adapter, and the Ethernet lights started blinking. "Great," I thought, but alas nothing happened.

After some research and troubleshooting, I figured out how to get things working reliably. Here's the steps:

1. If using a Thunderbolt to Ethernet adapter, connect it to your Mac (but not the camera to the adapter/Mac).
2. Go to the Sharing pane in System Preferences, and head to the Internet Sharing service. From there, enable the Thunderbolt Ethernet option in the table (or whatever is most relevant if your setup is different) and then enable Internet Sharing, as shown below:
![Sharing](/images/posts/setup-axis-camera-on-mac/sharing.png "Sharing")
3. Open the Console (Applications &rightarrow; Utilities &rightarrow; Console), and search for `axis` (nothing should be showing up just yet).
4. Connect the Axis camera to the Ethernet adapter.

After a few seconds, a few entries should start showing up in the Console:
![Console](/images/posts/setup-axis-camera-on-mac/console.png "Console")
I censored my camera's ID and MAC address, but we can see some interesting logs containing `DHCP REQUEST`, etc., and an `ACK` (meaning "Acknowledgement sent"), along with an IP address the Mac has allocated for the camera – in my case,  `192.168.2.2`. We can now go ahead and visit that IP address in the browser, and things work perfectly!

![Axis web interface](/images/posts/setup-axis-camera-on-mac/axisweb.png "Axis web interface")
_Ah, the joys of decade-old web interfaces_

Once things are all setup, Internet Sharing can be disabled – but you'll have to re-enable it if you want to reconnect in the same manner. This should work for most other cameras and devices, and is a cool trick Macs (and presumably most other modern OSs) are capable of doing!
