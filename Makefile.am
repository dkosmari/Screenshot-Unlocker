EXTRA_DIST = \
	bootstrap \
	COPYING \
	external 
	README.md


SUBDIRS = \
	external/WiiUPluginSystem

DIST_SUBDIRS =


AM_CPPFLAGS = $(WUPS_CPPFLAGS)

AM_CXXFLAGS = -Wall -Wextra -Werror

AM_LDFLAGS = $(WUPS_LDFLAGS)

LDADD = $(WUPS_LIB)


WPS_FILE = screenshot-unlocker.wps

noinst_PROGRAMS = screenshot-unlocker.elf

screenshot_unlocker_elf_SOURCES = src/main.cpp

EXTRA_screenshot_unlocker_elf_DEPENDENCIES = $(WUPS_LIB)



all-local: $(WPS_FILE)


.PHONY: run wiiu-install wiiu-uninstall


wiiu-install: $(WPS_FILE)
	curl  --upload-file $< "ftp://wiiu:/fs/vol/external01/wiiu/environments/aroma/plugins/"


wiiu-uninstall:
	curl "ftp://wiiu" --quote "DELE /fs/vol/external01/wiiu/environments/aroma/plugins/$(WPS_FILE)"


run: $(WPS_FILE)
	WIILOAD=tcp:wiiu wiiload $<


@INC_AMINCLUDE@

DISTCLEANFILES = $(AMINCLUDE)
