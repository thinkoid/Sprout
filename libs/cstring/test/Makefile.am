# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common
LIBS += $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

LDADD =

check_PROGRAMS =								\
	libs_cstring_test_cstring					\
	libs_cstring_test_memchr					\
	libs_cstring_test_memcmp					\
	libs_cstring_test_strchr					\
	libs_cstring_test_strcmp					\
	libs_cstring_test_strcoll					\
	libs_cstring_test_strcspn					\
	libs_cstring_test_strlen					\
	libs_cstring_test_strncmp					\
	libs_cstring_test_strpbrk					\
	libs_cstring_test_strrchr					\
	libs_cstring_test_strspn					\
	libs_cstring_test_strstr

TESTS = $(check_PROGRAMS)

libs_cstring_test_cstring_SOURCES = cstring.cpp
libs_cstring_test_memchr_SOURCES = memchr.cpp
libs_cstring_test_memcmp_SOURCES = memcmp.cpp
libs_cstring_test_strchr_SOURCES = strchr.cpp
libs_cstring_test_strcmp_SOURCES = strcmp.cpp
libs_cstring_test_strcoll_SOURCES = strcoll.cpp
libs_cstring_test_strcspn_SOURCES = strcspn.cpp
libs_cstring_test_strlen_SOURCES = strlen.cpp
libs_cstring_test_strncmp_SOURCES = strncmp.cpp
libs_cstring_test_strpbrk_SOURCES = strpbrk.cpp
libs_cstring_test_strrchr_SOURCES = strrchr.cpp
libs_cstring_test_strspn_SOURCES = strspn.cpp
libs_cstring_test_strstr_SOURCES = strstr.cpp






