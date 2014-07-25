dnl Prelude.
AC_INIT([helloworld], [0.1], [bug-report@xuchunyang.me]) dnl package-name, version, bug-report-address
AC_PREREQ([2.65])                                        dnl minimum Autoconf version
dnl AC_CONFIG_AUX_DIR([build-aux])            dnl Keep auxiliary scripts such as install-sh and depcomp should be in that dir
AM_INIT_AUTOMAKE([foreign -Wall]) dnl foreign: not in GNU Coding Style (including COPYRIGHT AUTHORS)

AC_DEFINE([PACKAGE_URL], [http://xuchunyang.me/], [the homepage of this package]) dnl => create a define n config.h
AC_SUBST([FOO], [foo])          dnl define $(FOO] as foo in Makefile

dnl checks for programs
AC_PROG_CC                                dnl check for a C compiler

AC_CHECK_PROGS([TAG], [tar gtar], [:])
if test "$TAG" = :; then
   AC_MSG_ERROR([This package needs tar.])
fi

AC_CHECK_PROGS([CURL], [curl http], [:])
if test "$TAG" = :; then
   AC_MSG_ERROR([This package needs curl.])
fi

dnl check for libraries
dnl 采用 pkg-config
# glib and wavpack support
PKG_CHECK_MODULES(wavpack, wavpack)
PKG_CHECK_MODULES(glib, glib-2.0)

AC_SUBST(glib_CFLAGS)
AC_SUBST(glib_LIBS)
AC_SUBST(wavpack_CFLAGS)
AC_SUBST(wavpack_LIBS)

dnl check for headers
dnl check for typedefs, structures, and compiler characteristics
dnl check for library function

dnl Output fils
AC_CONFIG_HEADERS([config.h])             dnl declare config.h as output header
AC_CONFIG_FILES([Makefile src/Makefile])  dnl declare Makefile and src/Makefile as output file
AC_CONFIG_SRCDIR([src/main.c])            dnl A safety check, make sure 'configure' is not run from outer space
AC_OUTPUT                                 dnl actually output all declared files
