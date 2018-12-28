#include "pch.h"
#include "../lipo-sapr-lab1/GreetinEntity.h"
#include "../lipo-sapr-lab1/GreetinEntity.cpp"

class GreetinEntityTest : public ::testing::Test
{
};

TEST_F(GreetinEntityTest, MessageTest)
{
	GreetinEntity greetinEntity(" googletest");
	string str = greetinEntity.message();
	string expect = (string)"Hello googletest";
	EXPECT_EQ(str, expect);
}

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}