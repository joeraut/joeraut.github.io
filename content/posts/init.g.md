---
title: "Breaking things at Google's init.g Security Workshop"
description: "A great learning experience at Google London"
date: 2019-11-05
image: "/img/posts/init.g/sunset.jpg"
---

Over the past weekend I was fortunate enough to attend init.g, an invite-only
three-day cyber security workshop by Google for students from Europe, the Middle East and Africa,
hosted in their London King's Cross office.

Out of the 40 attendees, I was the only one traveling from South Africa, but I quickly
met some fantastic folks and Google employees that made the workshop a blast!

![Posting with some cool post-it note art](/img/posts/init.g/stairs.jpg)

We started the first day with a workshop on binary vulnerabilities, where we exploited buffer and stack
overflows to do some magic like obtain root shells! (Un)fortunately, these attack vectors
aren't so easy to find and exploit these days, so we looked into using more
modern attacks such as [return-to-libc](https://en.wikipedia.org/wiki/Return-to-libc_attack),
as well as modern defences.

Day two involved a workshop on [fuzzing](https://en.wikipedia.org/wiki/Fuzzing),
going over its history and playing with some early examples, and then writing some code that used
[libFuzzer](https://llvm.org/docs/LibFuzzer.html) to throw random data at programs
to try and get them to exhibit some *interesting* behaviour (read: crashes!). Incredibly, it's
relatively easy to write a fuzzer to catch the Heartbleed bug, asserting the significance of fuzzing.
As we were at Google, it was obligatory to speak about the [VRP rewards](https://g.co/chromebugrewards)
on offer for finding vulnerabilities, and how fuzzing ties in nicely with the search.

We then had an additional workshop on Android application hacking, which involved interacting with
Android devices via ADB, decompiling and disassembling APKs, and then reverse-engineering disassembled
code to find some flags!

![CTF finals](/img/posts/init.g/ctf_finals.jpg)
*The Google CTF finals taking place*

The init.g event was held at the same time as the onsite final round of the [Google CTF](https://capturetheflag.withgoogle.com/),
so we had the chance to watch some of the best teams in the world compete for big prizes and attend their awards ceremony.
We were also able to try and defuse a fake bomb from the "Having a Blast" hardware CTF challenge---it blew up, sadly, but
at least we live to tell the tale!

Other highlights include presentations from top bughunters that had taken part in the Vulnerability Reward Program, where
they explained how some of their discoveries were made; we also got to do mock interviews with Google engineers
where we worked on preparing for the real deal. I also had the chance to spend a bit of time with
[LiveOverflow](https://www.youtube.com/channel/UClcE-kVhqyiHCcjYwcpfj9w)
and [John Hammond](https://www.youtube.com/user/RootOfTheNull),
two YouTubers with a focus on information security and breaking things that I have a great deal of respect for---kudos!

The opportunity to attend these workshops and improve my skills was invaluable, and I was fortunate to
meet some incredibly talented engineers and fellow attendees, and engage in many meaningful and
thought-provoking discussions. I can't thank the organisers enough for the experience!

![Some amazing office views](/img/posts/init.g/london.jpg)
*Some non-so-normal office views*

![CTF awards ceremony](/img/posts/init.g/ctf_finals_awards.jpg)
*Google CTF Awards Ceremony*

![Office art](/img/posts/init.g/office_art.jpg)
*Very creative Post-it Note office art*

<!-- Make the badge image slightly smaller -->
<div class="row">
    <div class="col-sm-8 col-sm-offset-2">
        <img src="/img/posts/init.g/badge.jpg" alt="Badge" />
        <em>Obligatory badge pic</em>
    </div>
</div>
<br>
