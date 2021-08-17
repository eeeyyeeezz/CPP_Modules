#include <iostream>
#include <chrono>
#include <ctime>
#include "Account.hpp"

Account::Account(){
	this->_nbAccounts = 0;
	this->_accountIndex = -1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit){
	this->_accountIndex++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_displayTimestamp();
	this->_nbAccounts = this->_accountIndex;
};

int		Account::getNbAccounts(){
return _nbAccounts;
}

int		Account::getTotalAmount(){
return _totalAmount;
}

int		Account::getNbDeposits(){
return _totalNbDeposits;
}

int		Account::getNbWithdrawals(){
return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(){

}


void	Account::displayStatus() const {
	this->displayStatus();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(){
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "TIME: [" << std::ctime(&end_time)
				<< "] TIME???: " << elapsed_seconds.count() << std::endl;
}

Account::~Account(){
	this->displayStatus();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
};