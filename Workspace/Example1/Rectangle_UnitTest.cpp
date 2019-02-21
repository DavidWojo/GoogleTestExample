#include <iostream>
#include <gtest\gtest.h>
#include "Rectangle.hpp"

using namespace std;

class RectangleTest : public ::testing::Test
{
	protected:
	void SetUp() override {
		// Nothing to do

	}
	Rectangle theRect;
};

TEST_F(RectangleTest, TestDefault)
{
	EXPECT_EQ(theRect.getHeight(), 5);
	EXPECT_EQ(theRect.getWidth(), 5);
	EXPECT_EQ(theRect.getArea(), 25);
	ASSERT_EQ(theRect.getName(), "MyRectangle");
}

TEST_F(RectangleTest, TestSetGetHeight)
{
	theRect.setHeight(10);
	EXPECT_EQ(theRect.getHeight(), 10);
	EXPECT_EQ(theRect.getArea(), 50);
}

TEST_F(RectangleTest, TestSetGetWidth)
{
	theRect.setWidth(7);
	EXPECT_EQ(theRect.getWidth(), 7);
	EXPECT_EQ(theRect.getArea(), 35);
}



int main(int argc, char ** argv)
{
	cout << "Starting unit testing...." << endl;
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	getchar();
	return 0;
}


