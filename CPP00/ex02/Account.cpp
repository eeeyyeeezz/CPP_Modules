#include <ctime>
#include <chrono>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(){
	
}

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created";
	std::cout << std::endl;
	this->_nbAccounts++;
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

int		Account::checkAmount() const{
	return (this->_amount);
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(){
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900)
		 << (now->tm_mon + 1)
		 <<  now->tm_mday << "_"
		 << now->tm_hour << now->tm_min << now->tm_sec;
	std::cout << "]";
}

void	Account::makeDeposit(int deposit){
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "p:amount:" << this->_amount << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "ammount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawl){
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawl:";
	if (withdrawl > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);		
	}
	this->_amount -= withdrawl;
	this->_totalAmount -= withdrawl;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << withdrawl << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawls:" << this->_nbWithdrawals << std::endl; 
	return (true);	
}

Account::~Account(){
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
};