/*
 * Screenshot Unlocker - A plugin to always enable screenshot uploads on the Wii U.
 *
 * Copyright (C) 2024  Daniel K. O.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */


#include <wups.h>

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


WUPS_PLUGIN_NAME(PACKAGE_NAME);
WUPS_PLUGIN_DESCRIPTION("Always enable uploading screenshots from the web browser.");
WUPS_PLUGIN_VERSION(PACKAGE_VERSION);
WUPS_PLUGIN_AUTHOR("Daniel K. O.");
WUPS_PLUGIN_LICENSE("GPLv3");


DECL_FUNCTION(BOOL,
              OSSetScreenCapturePermission,
              BOOL /*enable*/)
{
    return real_OSSetScreenCapturePermission(true);
}

WUPS_MUST_REPLACE(OSSetScreenCapturePermission,
                  WUPS_LOADER_LIBRARY_COREINIT,
                  OSSetScreenCapturePermission);


DECL_FUNCTION(BOOL,
              OSSetScreenCapturePermissionEx,
              BOOL /*enable_tv*/,
              BOOL /*enable_drc*/)
{
    return real_OSSetScreenCapturePermissionEx(true, true);
}

WUPS_MUST_REPLACE(OSSetScreenCapturePermissionEx,
                  WUPS_LOADER_LIBRARY_COREINIT,
                  OSSetScreenCapturePermissionEx);
