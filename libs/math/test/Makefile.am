# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common
LDADD = $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

check_PROGRAMS =								\
	libs_math_test_ceil							\
	libs_math_test_floor						\
	libs_math_test_round						\
	libs_math_test_trunc

TESTS = $(check_PROGRAMS)

libs_math_test_ceil_SOURCES = ceil.cpp
libs_math_test_floor_SOURCES = floor.cpp
libs_math_test_round_SOURCES = round.cpp
libs_math_test_trunc_SOURCES = trunc.cpp

