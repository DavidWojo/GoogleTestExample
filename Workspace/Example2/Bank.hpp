#pragma once
#include <iostream>
#include "Customer.hpp"

using namespace std;

class Bank
{
public:
	virtual Customer * GetCustomer(int customerId) = 0;
	virtual void AddCustomer(Customer * ptCustomer) = 0;
};