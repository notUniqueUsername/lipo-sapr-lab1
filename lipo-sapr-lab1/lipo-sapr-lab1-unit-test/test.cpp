#include "pch.h"
#include "../lipo-sapr-lab1/GreetinEntity.h"
#include "../lipo-sapr-lab1/stdafx.h"
#include "../lipo-sapr-lab1/targetver.h"
#include "string"
#include "iostream"
#include "cstdlib"
#include "ostream"

using namespace std;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
class GreetinEntityTest : public ::testing::Test {
	void SetUp() {
		//qwe = new GreetinEntity;
		qwe.setWho((string)"terrible googletest");
		//result = new string;
		result = qwe.message();
	}
	GreetinEntity qwe;
	string result;
};
TEST_F(GreetinEntityTest, MainTest) {
	//string str = qwe.message();
	string expected = "Helloterrible googletest";
	EXPECT_EQ(expected, "Helloterrible googletest");
	EXPECT_TRUE(true);
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}