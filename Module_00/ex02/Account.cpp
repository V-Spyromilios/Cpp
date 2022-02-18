#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int		Account::getTotalAmount() {
	return (_totalAmount);

}

int		Account::getNbDeposits( void ) {
	return (_totalNbDeposits);

}
int		Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);

}
void	Account::displayAccountsInfos( void ) {
	 _displayTimestamp();
	 std::cout<<"acounts:"<< getNbAccounts()<<";";
	 std::cout<<"total:"<< getTotalAmount()<<";";
	 std::cout<<"deposits:" <<getNbDeposits()<<";";
	 std::cout<<"withdrawals:"<<getNbWithdrawals()<<";\n";

}

Account::Account( int initial_deposit ) {
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout <<"Index:"<< this->_accountIndex <<";"; 
	std::cout << "amount:"<<this->_amount<<";" << "created\n";

}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"closed\n";
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"p_amount:"<<this->_amount<<";";
	this->_amount += deposit;
	std::cout<<"deposit:"<<deposit<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"deposits:"<<this->_nbDeposits<<";\n";
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (this->_amount >= withdrawal) {
			_totalNbWithdrawals++;
			_totalAmount -= withdrawal;
			std::cout<<"index:"<<this->_accountIndex<<";";
			std::cout<<"p_amount:"<<this->_amount<<";";
			std::cout<<"withdrawal:"<<withdrawal<<";";
			this->_amount -= withdrawal;
			std::cout<<"amount:"<<this->_amount<<";";
			std::cout<<"withdrawals:"<<this->_nbDeposits<<";\n";
			return (true);
	}
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"p_amount:"<<this->_amount<<";";
	std::cout<<"withrawal:refused\n";	
	return (false);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);

}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount"<<this->checkAmount()<<";";
	std::cout<<"deposits:"<<this->_nbDeposits<<";";
	std::cout<<"withdrawals:"<<this->_nbWithdrawals<<";\n";
}

void	Account::_displayTimestamp( void ) {
	time_t time = std::time(nullptr);
    tm time_struct = *std::localtime(&time);
    std::cout << std::put_time(&time_struct, "[%Y%m%d%H%M%S] ");

}