# [joeraut.com](https://joeraut.com/)
The source code of my Hugo-based blog and personal site.

## Generator
[Hugo](https://gohugo.io/), a static site generator, is used to convert content written in Markdown into HTML files along with
all the prerequisite assets, and packages them up into a single distribution to be served up to visitors.

A GitHub Action is invoked when content is pushed to the `source` branch; it invokes Hugo, compiles the site, and pushes the output
to the `master` branch which is then served by GitHub Pages when visiting the domain.

## Hosting
GitHub Pages is used to host the site from Hugo-generated content in the `master` branch, pointed to by the custom domain.
I use CloudFlare for further CDN benefits, and CNAME `joeraut.com` to `joeraut.github.io`.

## Theme
I based the blog off of the beautiful [startbootstrap-clean-blog](https://github.com/UtkarshVerma/startbootstrap-clean-blog)
theme, with modifications for my needs.

## License
This site is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
