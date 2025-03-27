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


int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}


#if 0 
TEST(AccountTest, AccountT1)
{
	Account account(10000);
	int ret = account.getBalance();

	EXPECT_EQ(10000, ret);
}

TEST(AccountTest, AccountT2)
{
	Account account(10000);
	account.deposit(500);
	int ret = account.getBalance();

	EXPECT_EQ(10500, ret);
}
TEST(AccountTest, AccountT3)
{
	Account account(10000);
	account.withdraw(600);
	int ret = account.getBalance();

	EXPECT_EQ(9400, ret);
}

TEST(AccountTest, AccountT4)
{
	Account account(10000, 1.05);
	account.updateInterest();
	int ret = account.getBalance();

	EXPECT_EQ(10500, ret);
}

TEST(AccountTest, AccountT5)
{
	Account account(10000, 1.05);
	account.setInterest(1.1);
	account.updateInterest();
	int ret = account.getBalance();

	EXPECT_EQ(11000, ret);
}

TEST(AccountTest, AccountT6)
{
	Account account(10000, 1.1);
	account.updateInterest();
	account.updateInterest();
	int ret = account.getBalance();

	EXPECT_EQ(12100, ret);
}

TEST(AccountTest, AccountT7)
{
	Account account(10000, 1.1);
	account.updateInterestNyears(5);
	int ret = account.getBalance();

	EXPECT_EQ(16105, ret);
}

TEST(AccountTest, AccountT8)
{
	Account account(10000, 1.1);
	int ret = account.expectInterestNyears(5);

	EXPECT_EQ(16105, ret);
}


TEST(cal, calT1)
{
	EXPECT_EQ(1, cal().calMinus(5, 4));
}

TEST(cal, calT2)
{
	EXPECT_EQ(9, cal().calMinus(1, 10));
}

TEST(Fibo, FiboT1)
{
	EXPECT_EQ(0, Fibo().fibo(0));
	EXPECT_EQ(1, Fibo().fibo(1));
}


TEST(Fibo, OrderT)
{
	vector<vector<int>> cases = { {0,0}, {1,1} , {3,2} };

	for (int i = 0; i < cases.size(); i++)
	{
		int input = cases[i][0];
		int expected = cases[i][1];
		EXPECT_EQ(expected, Fibo().fibo(input));
	}
}


#endif
