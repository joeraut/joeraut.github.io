---
title: "Static sites: Migrating from Wordpress to Hugo"
description: "Why going static may be worth it"
date: 2019-07-08
---

I recently moved this site over from Wordpress to [Hugo](https://gohugo.io/), a popular static site generator, and only wish I'd
had made the switch sooner. (I've also open-sourced the site [on GitHub](https://github.com/joeraut/joeraut.github.io).)

After years of running Wordpress, I had grown frustrated with the bloated and high-maintenance nature of the CMS that it is.
Keeping plugins updated and compatible required more time than it was worth, and writing posts became a chore with the constant
vigilance required in ensuring correct formatting in its WYSIWYG editor. Change was necessary.

Static site generators such as [Jekyll](https://jekyllrb.com/) and Hugo are all the rage these days, primarily doing the same
job as a regular CMS: taking a bunch of content and converting them into pretty web pages. However, unlike traditional CMSs,
they do it all ahead of time: converting content written with [Markdown](https://en.wikipedia.org/wiki/Markdown) into
HTML files along with all the prerequisite assets, and packaging them up into a single distribution, ready to be served without the
need for a database or dynamic execution (_e.g._ PHP).

I ended up going with Hugo over Jekyll due to speed and portability. Jekyll, being Ruby-based, requires a Ruby development environment
and a large number of prerequisites for use, whilst Hugo is built in Go and statically compiled, making it extremely portable and
quick to install and run.

The nicest aspect of the change has been the ease in writing posts. Using Markdown is a pleasure, and exponentially better than the
WYSIWYG editor of yesterday.

Going forward, a greater degree of control and flexibility was well worth the time invested in migrating existing content and
setting up and customising the site. I based the blog off of the beautiful
[startbootstrap-clean-blog](https://github.com/UtkarshVerma/startbootstrap-clean-blog)
theme, with modifications made for further requirements.

Ultimately, one should go with a CMS they feel most comfortable with in the long-term; Hugo meets all my needs now and in future,
and I couldn't be happier with the new setup.
