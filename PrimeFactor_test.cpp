#include "gmock/gmock.h"
#include "PrimeFactor.cpp";

using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_Factor;
	vector<int> expected;
private:

};


TEST_F(PrimeFixture, Of1)
{
	expected = {};

	EXPECT_EQ(expected, prime_Factor.of(1));
}


TEST_F(PrimeFixture, Of2)
{
	expected = {2};

	EXPECT_EQ(expected, prime_Factor.of(2));
}

TEST_F(PrimeFixture, Of3)
{
	expected = {3};

	EXPECT_EQ(expected, prime_Factor.of(3));
}


TEST_F(PrimeFixture, Of4)
{
	expected = {2, 2};

	EXPECT_EQ(expected, prime_Factor.of(4));
}


TEST_F(PrimeFixture, Of6)
{
	expected = {2, 3};

	EXPECT_EQ(expected, prime_Factor.of(6));
}


TEST_F(PrimeFixture, Of9)
{
	expected = {3, 3};

	EXPECT_EQ(expected, prime_Factor.of(9));
}


TEST_F(PrimeFixture, Of12)
{
	expected = {2, 2, 3};

	EXPECT_EQ(expected, prime_Factor.of(12));
}


int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}

