EXTRA_DIST = \
	bootstrap \
	COPYING \
	README.md


AM_CXXFLAGS = -Wall -Wextra -Werror

WPS_FILE = screenshot-unlocker.wps

noinst_PROGRAMS = screenshot-unlocker.elf

screenshot_unlocker_elf_SOURCES = src/main.cpp


all-local: $(WPS_FILE)


install-exec-local: $(WPS_FILE)
	curl  --upload-file $< "ftp://wiiu:/fs/vol/external01/wiiu/environments/aroma/plugins/"


uninstall-local:
	curl "ftp://wiiu" --quote "DELE /fs/vol/external01/wiiu/environments/aroma/plugins/$(WPS_FILE)"


.PHONY: run
run: $(WPS_FILE)
	WIILOAD=tcp:wiiu wiiload $<


@INC_AMINCLUDE@
DISTCLEANFILES = $(AMINCLUDE)
