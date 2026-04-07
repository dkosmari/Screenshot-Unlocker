#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([Screenshot Unlocker], [1.0+],
        [https://github.com/dkosmari/Screenshot-Unlocker/issues],
        [],
        [https://github.com/dkosmari/Screenshot-Unlocker])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])

DEVKITPRO_WUT_INIT

AM_INIT_AUTOMAKE([foreign subdir-objects])

DEVKITPRO_WUT_SETUP

AC_PROG_CXX
AX_APPEND_COMPILE_FLAGS([-std=c++23], [CXX])
AC_LANG([C++])

WIIU_ENV_SETUP_WUPS([external/WiiUPluginSystem])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
