# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common
LDADD = $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

check_PROGRAMS =								\
	libs_math_test_trunc						\
	libs_math_test_ceil

TESTS = $(check_PROGRAMS)

libs_math_test_trunc_SOURCES = trunc.cpp
libs_math_test_ceil_SOURCES = ceil.cpp

