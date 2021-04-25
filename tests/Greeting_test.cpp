#include "../srcs/Greeting.hpp"
#include "gtest/gtest.h"

TEST(GreetingShould, ReturnHi)
{
  Greeting greeting;
  std::string actual = greeting.sayHi();
  std::string expected = "Hi";
  EXPECT_EQ(expected, actual);
}
