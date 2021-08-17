#include <iostream>
#include <chrono>
#include <ctime>
#include "Account.hpp"


Account::Account(int initial_deposit)
{
	
	
};

void	Account::_displayTimestamp(void)
{
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "TIME: [" << std::ctime(&end_time)
				<< "] TIME???: " << elapsed_seconds.count() << "s\n";
}


// Account::~Account
// {
	
// };