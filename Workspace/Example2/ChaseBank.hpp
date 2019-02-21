#pragma once
#include <iostream>
#include "Bank.hpp"
#include "Customer.hpp"

using namespace std;


class ChaseBank : public Bank
{
public:
	virtual Customer * GetCustomer(int customerId);
	virtual void AddCustomer(Customer * ptrCustomer);
protected:
	Customer * ptrCustomer;
};