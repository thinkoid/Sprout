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

#include <sprout/math/floor.hpp>

#include <limits>

BOOST_AUTO_TEST_SUITE(libs_math_floor)

BOOST_AUTO_TEST_CASE(libs_math_floor_float)
{
    const auto x = (std::numeric_limits< uintmax_t >::max)();
    const auto result = sprout::math::floor(static_cast< float >(x));
    BOOST_TEST(result == static_cast< float >(x));
}

BOOST_AUTO_TEST_CASE(libs_math_floor_double)
{
    const auto x = (std::numeric_limits< uintmax_t >::max)();
    const auto result = sprout::math::floor(static_cast< double >(x));
    BOOST_TEST(result == static_cast< double >(x));
}

BOOST_AUTO_TEST_CASE(libs_math_floor_long_double)
{
    const auto x = (std::numeric_limits< uintmax_t >::max)();
    const auto result = sprout::math::floor(static_cast< long double >(x));
    BOOST_TEST(result == static_cast< long double >(x));
}

BOOST_AUTO_TEST_SUITE_END()

