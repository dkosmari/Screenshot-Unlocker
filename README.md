# Screenshot Unlocker

Some Wii U games and apps disable the upload of screenshots through the Home Menu's web
browser. This plugin overrides the setting, to always enable screenshots.

Note: this plugin has no relationship to the [official Screenshot
plugin](https://github.com/wiiu-env/ScreenshotWUPS) from Aroma.


## Usage

This plugin has no settings. Just open any game or app that would normally disable
screenshots, and try to upload them; it will not prevent you from uploading the
screenshots.


## Build Instructions

If you got the source from a release tarball, you can skip step 0.

Build steps:

  0. `./bootstrap`

  1. `./configure --host=powerpc-eabi`

  2. `make`

This is a standard Automake package. See `./configure --help` for more options.


## Build Instructions (Docker version)

If you have Docker available, just run the script `docker-build.sh`.
