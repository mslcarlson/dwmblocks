# Matt's dwmblocks

![](https://img.shields.io/github/repo-size/mslcarlson/dwmblocks?color=brightgreen) ![](https://img.shields.io/github/last-commit/mslcarlson/dwmblocks?color=informational) ![](https://img.shields.io/github/license/mslcarlson/dwmblocks?color=orange) ![](https://img.shields.io/github/languages/count/mslcarlson/dwmblocks?color=yellow)

![Matt's dwmblocks](https://raw.githubusercontent.com/mslcarlson/dwmblocks/master/dwmblocks.gif)

This is my build of [torrinfail's dwmblocks](https://github.com/torrinfail/dwmblocks), a modular status bar for dwm written in c. 

For personal use. I don't expect anybody to actually use this.

# Special Features
* Uses custom clickable modules from my dotfiles (include module scripts directory in `$PATH`)
* Sleep function that fixes flickering that sometimes happens with modules (shouldn't be an issue with simple modules)

# Installation
## Arch Linux

```bash
git clone https://github.com/mslcarlson/dwmblocks
cd dwmblocks
sudo make clean install
```
