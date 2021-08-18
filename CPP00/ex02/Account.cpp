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
	displayStatus();
	this->_nbAccounts = _accountIndex;
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

void	Account::makeDeposit(int deposit){
	
}

bool	Account::makeWithdrawal(int withdrawl){

	return (true);	
}

int		Account::checkAmount() const{
	return (1);
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
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900)
		 << (now->tm_mon + 1)
		 <<  now->tm_mday << "_"
		 << now->tm_hour << now->tm_min << now->tm_sec;
	std::cout << "]" << std::endl;
}

Account::~Account(){
	this->displayStatus();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
};