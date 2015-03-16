#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([hello], [0.99.0], [bogus@bogus.org])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([hello.c])
AC_CONFIG_HEADERS(config.h)

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([sys/time.h sys/stat.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_MEMBERS([struct stat.st_blksize])

# Checks for library functions.
AC_CHECK_FUNCS([gettimeofday stat])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
