#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Customer.hpp"
#include "Bank.hpp"
#include "ChaseBank.hpp"
using ::testing::Return;
using ::testing::AtLeast;
using namespace std;

class CustomerMock : public Customer
{
public:
	MOCK_CONST_METHOD0(GetSavingsBalance, float());
};


TEST(CustomerMock, GetSavingsBalance)
{
	CustomerMock customerMock;
	Bank * ptrBank = new ChaseBank();
	ptrBank->AddCustomer(&customerMock);
	const float BALANCE = +10.00F;
	ON_CALL(customerMock, GetSavingsBalance).WillByDefault(Return(BALANCE));
	EXPECT_CALL(customerMock, GetSavingsBalance).Times(AtLeast(1));
	float savingsBalance = ptrBank->GetCustomer(1)->GetSavingsBalance();
	EXPECT_EQ(savingsBalance, BALANCE);
	delete ptrBank;
}

TEST(CustomerMock, GetSavingsBalanceExpectException)
{
	CustomerMock customerMock;
	Bank * ptrBank = new ChaseBank();
	ptrBank->AddCustomer(&customerMock);
	const float BALANCE = +10.00F;
	ON_CALL(customerMock, GetSavingsBalance).WillByDefault(Return(BALANCE));
	EXPECT_THROW( {float savingsBalance = ptrBank->GetCustomer(-1)->GetSavingsBalance();}, std::out_of_range );
	delete ptrBank;
}

int main(int argc, char ** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	getchar();
	return 0;
}

