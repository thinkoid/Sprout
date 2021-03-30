dnl -*- Autoconf -*-

AC_DEFUN([AC_CONFIG_CXX_WARNINGS],[
WARNFLAGS=" -W -Wall -Wextra -Wno-unused-parameter -Werror"

CFLAGS+="$WARNFLAGS"
CXXFLAGS+="$WARNFLAGS"

])
