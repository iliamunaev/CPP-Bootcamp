#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
  : _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0) {
  _nbAccounts++;
  _totalAmount += initial_deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";created" << std::endl;
}

Account::~Account() {
  _nbAccounts--;
  _totalAmount -= _amount;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";closed" << std::endl;
}

int Account::getNbAccounts(void) {
  return _nbAccounts;
}

int Account::getTotalAmount(void) {
  return _totalAmount;
}

int Account::getNbDeposits(void) {
  return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
  return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts()
        << ";total:" << getTotalAmount()
        << ";deposits:" << getNbDeposits()
        << ";withdrawals:" << getNbWithdrawals()
        << std::endl;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
}

int Account::checkAmount(void) const {
  return _amount;
}

void Account::_displayTimestamp(void) {
  std::time_t now = std::time(0);
  std::tm* local = std::localtime(&now);

  char yyyymmdd[9];
  std::strftime(yyyymmdd, sizeof(yyyymmdd), "%Y%m%d", local);

  char hhmmss[7];
  std::strftime(hhmmss, sizeof(hhmmss), "%H%M%S", local);

  std::cout << "[" << yyyymmdd << "_" << hhmmss << "] ";
}

void Account::makeDeposit( int deposit ) {
  _amount += deposit;
  _nbDeposits += 1;

}

bool Account::makeWithdrawal( int withdrawal ) {
  int saldo = _amount - withdrawal;

  if (saldo >= 0) {
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    return true;
  }

  return false;
}
