# [joeraut.com](https://joeraut.com/)

The source code of my Hugo-based site and blog.

## Generator
[Hugo](https://gohugo.io/), a static site generator, is used to convert content written with Markdown into HTML files along with
all the prerequisite assets, and packages them up into a single distribution to be served up to visitors.

A GitHub Action is invoked when content is pushed to the `source` branch; it invokes Hugo, compiles the site, and pushes the output
to the `master` branch, served by GitHub Pages.

## Hosting

GitHub Pages is used to host the site from Hugo-generated content in the `master` branch, pointed to by the custom domain.

## Theme
I based the blog off of the beautiful [startbootstrap-clean-blog](https://github.com/UtkarshVerma/startbootstrap-clean-blog)
theme, with modifications for my needs.

## License

This site is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
