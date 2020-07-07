---
title: "Converting LaTeX equations to images online with Docker and Node.js"
description: "Designing a web app with security in mind"
date: 2019-01-21
---

As a LaTeX user that occasionally needs to use Microsoft Word, I often convert LaTeX math equations to images to include them in the documents. Let's build something to make it easy!

I came up with Node.js web app that allows LaTeX math equations to be entered and converted to PNG/JPG/SVG images.

![Homepage](/images/posts/latex-to-image-web/main.png "Main")


For each conversion, Node.js starts an isolated Docker container with a LaTeX installation; it compiles the generated `.tex` file and converts it to an SVG vector image. If required, the SVG file is then converted to a raster image format for PNG/JPG.

Bootstrap and jQuery are used in the web interface, with AJAX calls made to the conversion API endpoint.

It made sense to use Docker as, well, **LaTeX is powerful**. Reading and writing external files and executing terminal commands are possible, and easy to exploit.

The isolated Docker container started for each conversion is only able to access the local `temp/<id>/` directory and has no network access.
Additionally, the compilation process will be killed after 5 seconds if not complete; this is to safeguard against infinite loops and other troublesome LaTeX quirks.

### Use it

The app is up and running at [latex2image.joeraut.com](https://latex2image.joeraut.com/).

### Source code

The [source code is available on GitHub](https://github.com/joeraut/latex2image-web).

![Equation](/images/posts/latex-to-image-web/equation.svg "Equation")