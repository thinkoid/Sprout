# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common

bin_PROGRAMS = texconv

texconv_CXXFLAGS = $(AM_CXXFLAGS) -Wno-deprecated-anon-enum-enum-conversion
texconv_CPPFLAGS = $(AM_CPPFLAGS) $(OPENCV4_CPPFLAGS)
texconv_LDADD = $(OPENCV4_LIBS)
