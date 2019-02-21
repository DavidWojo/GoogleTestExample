#include "ChaseBank.hpp"


Customer * ChaseBank::GetCustomer(int customerId)
{
	if (customerId <= 0)
	{
		throw std::out_of_range("OUT OF RANGE");
	}
	return this->ptrCustomer;
}

void ChaseBank::AddCustomer(Customer * ptrCustomer)
{
	this->ptrCustomer = ptrCustomer;
}