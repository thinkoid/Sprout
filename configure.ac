# -*- Autoconf -*-

AC_INIT([sprout],[0.0.1],[])

AC_CONFIG_HEADERS([include/sprout/config/_config.hpp:include/sprout/config/_config.hpp.ac])
AC_CONFIG_MACRO_DIRS([etc/m4])

AM_INIT_AUTOMAKE([-Wno-portability subdir-objects dist-bzip2 nostdinc foreign])
AM_SILENT_RULES([yes])

AC_PROG_CXX
AC_CONFIG_CXX_WARNINGS

AC_ENABLE_CXX_DIALECT([c++2a])

LT_INIT
AC_PROG_MAKE_SET(gmake)
AM_PROG_AS

BOOST_REQUIRE([1.69.0])

BOOST_FILESYSTEM
BOOST_SYSTEM
BOOST_TEST
BOOST_THREAD
BOOST_WAVE

AC_PKG_CONFIG_WITH([opencv4])

AM_CONDITIONAL([DARWIN],[test `uname` == Darwin])
AM_CONDITIONAL([LINUX], [test `uname` == Linux])

AC_CONFIG_FILES(Makefile)
AC_CONFIG_FILES(etc/Makefile)
AC_CONFIG_FILES(include/Makefile)
AC_CONFIG_FILES(tools/Makefile)
AC_CONFIG_FILES(tools/compost/Makefile)
AC_CONFIG_FILES(tools/darkroom/Makefile)
AC_CONFIG_FILES(tools/files/Makefile)
AC_CONFIG_FILES(libs/Makefile)
AC_CONFIG_FILES(libs/algorithm/Makefile)
AC_CONFIG_FILES(libs/algorithm/test/Makefile)
AC_CONFIG_FILES(libs/array/Makefile)
AC_CONFIG_FILES(libs/array/test/Makefile)
AC_CONFIG_FILES(libs/bitset/Makefile)
AC_CONFIG_FILES(libs/bitset/test/Makefile)
AC_CONFIG_FILES(libs/cstring/Makefile)
AC_CONFIG_FILES(libs/cstring/test/Makefile)
AC_CONFIG_FILES(libs/net/Makefile)
AC_CONFIG_FILES(libs/net/test/Makefile)
AC_CONFIG_FILES(libs/optional/Makefile)
AC_CONFIG_FILES(libs/optional/test/Makefile)
AC_CONFIG_FILES(libs/random/example/Makefile)
AC_CONFIG_FILES(libs/random/Makefile)
AC_CONFIG_FILES(libs/random/test/Makefile)
AC_CONFIG_FILES(libs/string/example/Makefile)
AC_CONFIG_FILES(libs/string/Makefile)
AC_CONFIG_FILES(libs/string/test/Makefile)
AC_CONFIG_FILES(libs/tuple/Makefile)
AC_CONFIG_FILES(libs/tuple/test/Makefile)
AC_CONFIG_FILES(libs/utility/Makefile)
AC_CONFIG_FILES(libs/utility/string_view/Makefile)
AC_CONFIG_FILES(libs/utility/string_view/test/Makefile)
AC_CONFIG_FILES(libs/variant/Makefile)
AC_CONFIG_FILES(libs/variant/test/Makefile)
AC_CONFIG_FILES(libs/weed/example/Makefile)
AC_CONFIG_FILES(libs/weed/Makefile)

AC_OUTPUT

