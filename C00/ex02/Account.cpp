#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
  return (_nbAccounts);  
}

int	Account::getTotalAmount( void )
{
  return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
  return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
  return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void )
{
   time_t now = time(0);
   tm *ltm = localtime(&now);

   std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday;
   std::cout << "_" << 5 + ltm->tm_hour;
   std::cout << 30 + ltm->tm_min;
   std::cout << ltm->tm_sec;
   std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
  _displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << \
  ";total:" << Account::getTotalAmount() << ";deposits:" << \
  Account::getNbDeposits() << ";withdrawals:" << \
  Account::getNbWithdrawals() << std::endl;
}

Account::Account( void ) {}

Account::Account( int initial_deposit )
{
  this->_nbAccounts += 1;
  this->_totalAmount += initial_deposit;
  this->_amount = initial_deposit;
  this->_accountIndex = this->_nbAccounts - 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";" << "amount:" << \
  this->_amount << ";" << "created" << std::endl;
}

Account::~Account( void )
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << \
  this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
  _totalNbDeposits += 1;
  this->_nbDeposits += 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << \
  ";p_amount:" << this->_amount << \
  ";deposit:" << deposit << \
  ";amount:" << this->_amount + deposit << \
  ";nb_deposits:1" << std::endl;
  this->_amount += deposit;
  _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << \
  ";p_amount:" << this->_amount <<
  ";withdrawal:";
  if (this->_amount - withdrawal < 0)
  {
    std::cout << "refused" << std::endl;
    return (0);
  }
  _totalNbWithdrawals += 1;
  this->_nbWithdrawals += 1;
  std::cout << withdrawal << \
  ";amount:" << this->_amount - withdrawal << \
  ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  this->_amount -= withdrawal;
  _totalAmount -= withdrawal;
  return (1);
}

int		Account::checkAmount( void ) const
{
  return (1);
}

void	Account::displayStatus( void ) const
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << \
  this->_amount << ";deposits:" << this->_nbDeposits << \
  ";withdrawals:" << this->_nbWithdrawals << std::endl;
} 