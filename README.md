# [joeraut.com](https://joeraut.com)

The source of my Hugo-based site and blog.

## Generator
[Hugo](https://gohugo.io/), a static site generator, is used to convert content (inside `content/`) written with Markdown into HTML
files along with all the prerequisite assets, and packages them up into a single distribution in `public/`.

To compile, enter the site directory and type `hugo`.

## Theme
I based the blog off of the beautiful [startbootstrap-clean-blog](https://github.com/UtkarshVerma/startbootstrap-clean-blog)
theme, with modifications for my needs. The contact form backend is now using [Basin](https://usebasin.com/), along with reCAPTCHA – 
view [clean-blog.js](static/js/clean-blog.js) for the source.
The theme files have been directly integrated into the `/layouts/` and `static/` directories, without a separate `themes/` directory.

## License

This site is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
