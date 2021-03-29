# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common
LIBS += $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

LDADD =

check_PROGRAMS =								\
	libs_random_test_additive_combine			\
	libs_random_test_bernoulli_distribution		\
	libs_random_test_binomial_distribution		\
	libs_random_test_geometric_distribution		\
	libs_random_test_inversive_congruential		\
	libs_random_test_linear_congruential		\
	libs_random_test_normal_distribution		\
	libs_random_test_random						\
	libs_random_test_shuffle_order				\
	libs_random_test_taus88						\
	libs_random_test_uniform_01					\
	libs_random_test_uniform_int_distribution	\
	libs_random_test_uniform_real_distribution	\
	libs_random_test_uniform_smallint

TESTS = $(check_PROGRAMS)

libs_random_test_additive_combine_SOURCES = additive_combine.cpp
libs_random_test_bernoulli_distribution_SOURCES = bernoulli_distribution.cpp
libs_random_test_binomial_distribution_SOURCES = binomial_distribution.cpp
libs_random_test_geometric_distribution_SOURCES = geometric_distribution.cpp
libs_random_test_inversive_congruential_SOURCES = inversive_congruential.cpp
libs_random_test_linear_congruential_SOURCES = linear_congruential.cpp
libs_random_test_normal_distribution_SOURCES = normal_distribution.cpp
libs_random_test_random_SOURCES = random.cpp
libs_random_test_shuffle_order_SOURCES = shuffle_order.cpp
libs_random_test_taus88_SOURCES = taus88.cpp
libs_random_test_uniform_01_SOURCES = uniform_01.cpp
libs_random_test_uniform_int_distribution_SOURCES = uniform_int_distribution.cpp
libs_random_test_uniform_real_distribution_SOURCES = uniform_real_distribution.cpp
libs_random_test_uniform_smallint_SOURCES = uniform_smallint.cpp

