# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common

bin_PROGRAMS = texconv

texconv_SOURCES = texconv.cpp
texconv_CPPFLAGS = $(AM_CPPFLAGS) $(OPENCV4_CPPFLAGS)
texconv_LDADD = $(OPENCV4_LIBS) $(LIBS)
