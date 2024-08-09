EXTRA_DIST = \
	bootstrap \
	COPYING \
	README.md


AM_CPPFLAGS = $(DEVKITPRO_CPPFLAGS)

AM_CXXFLAGS = \
	$(DEVKITPRO_CXXFLAGS) \
	-Wall -Wextra

AM_LDFLAGS = $(DEVKITPRO_LDFLAGS)

LIBS = $(DEVKITPRO_LIBS)


WPS_FILE = screenshot-unlocker.wps

noinst_PROGRAMS = screenshot-unlocker.elf

screenshot_unlocker_elf_SOURCES = src/main.cpp


all-local: $(WPS_FILE)


install-exec-local: $(WPS_FILE)
	curl "ftp://wiiu:/fs/vol/external01/wiiu/environments/aroma/plugins/" --upload-file $<


uninstall-local:
	curl "ftp://wiiu" --quote "DELE /fs/vol/external01/wiiu/environments/aroma/plugins/$(WPS_FILE)"


.PHONY: run
run: $(WPS_FILE)
	WIILOAD=tcp:wiiu wiiload $<


@INC_AMINCLUDE@
DISTCLEANFILES = $(AMINCLUDE)
