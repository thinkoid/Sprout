# -*- mode: makefile; -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common

BOOST_LIBS =									\
	$(BOOST_FILESYSTEM_LIBS)					\
	$(BOOST_WAVE_LIBS)							\
	$(BOOST_SYSTEM_LIBS)						\
	$(BOOST_THREAD_LIBS)

bin_PROGRAMS = filegraph

filegraph_CPPFLAGS = $(AM_CPPFLAGS) $(BOOST_CPPFLAGS)
filegraph_LDFLAGS = $(AM_LDFLAGS) $(BOOST_LDFLAGS_)
filegraph_LDADD = $(BOOST_LIBS)
