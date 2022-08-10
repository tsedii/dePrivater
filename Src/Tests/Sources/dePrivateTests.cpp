#include "dePrivater.hpp"

#include <gtest/gtest.h>


TEST(DePrivateTestSuite, de_private)
{
    ASSERT_EQ( de_privater::DePrivater().DePrivate(), true );
}
