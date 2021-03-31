/*=============================================================================
  Copyright (c) 2021 Thinkoid, LLC
  https://github.com/thinkoid/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE libs_math

#include <boost/test/unit_test.hpp>
namespace utf = boost::unit_test;

#include <sprout/math/trunc.hpp>

BOOST_AUTO_TEST_SUITE(libs_math_trunc)

BOOST_AUTO_TEST_CASE(libs_math_trunc_)
{
    const auto result = sprout::math::trunc(18446744073709551616.);
    BOOST_TEST(result != 0.);
}

BOOST_AUTO_TEST_SUITE_END()

