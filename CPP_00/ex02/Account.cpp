#include "Account.hpp"
#include <iostream>
#include <ctime>

// static member definitions
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**
 * @brief Constructs a new Account object with an initial deposit.
 * 
 * Increments the total number of accounts and updates the total amount.
 * Displays creation timestamp and account details.
 * 
 * @param initial_deposit The amount to initialize the account with.
 */
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

/**
 * @brief Destructor for the Account object.
 * 
 * Decrements the total number of accounts and updates the total amount.
 * Displays closure timestamp and account details.
 */
Account::~Account() {
    _nbAccounts--;
    _totalAmount -= _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

/**
 * @brief Gets the total number of accounts.
 * 
 * @return Total number of accounts.
 */
int Account::getNbAccounts(void) { return _nbAccounts; }

/**
 * @brief Gets the total amount of all accounts.
 * 
 * @return Total amount.
 */
int Account::getTotalAmount(void) { return _totalAmount; }

/**
 * @brief Gets the total number of deposits made across all accounts.
 * 
 * @return Total number of deposits.
 */
int Account::getNbDeposits(void) { return _totalNbDeposits; }

/**
 * @brief Gets the total number of withdrawals made across all accounts.
 * 
 * @return Total number of withdrawals.
 */
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

/**
 * @brief Displays overall account information: number of accounts, total amount, deposits, and withdrawals.
 */
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

/**
 * @brief Displays the status of the current account, including amount, deposits, and withdrawals.
 */
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

/**
 * @brief Returns the current amount in the account.
 * 
 * @return The current account balance.
 */
int Account::checkAmount(void) const {
    return _amount;
}

/**
 * @brief Displays a timestamp in the format [YYYYMMDD_HHMMSS].
 */
void Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm* local = std::localtime(&now);

    char yyyymmdd[9];
    std::strftime(yyyymmdd, sizeof(yyyymmdd), "%Y%m%d", local);

    char hhmmss[7];
    std::strftime(hhmmss, sizeof(hhmmss), "%H%M%S", local);

    std::cout << "[" << yyyymmdd << "_" << hhmmss << "] ";
}

/**
 * @brief Deposits the specified amount into the account.
 * 
 * Increases the account balance and the number of deposits.
 * 
 * @param deposit The amount to be deposited.
 */
void	Account::makeDeposit( int deposit ) {
    _amount += deposit;
    _nbDeposits += 1;

}

/**
 * @brief Attempts to withdraw the specified amount from the account.
 * 
 * Decreases the account balance if sufficient funds exist and updates the number of withdrawals.
 * 
 * @param withdrawal The amount to be withdrawn.
 * @return true if the withdrawal was successful, false otherwise.
 */
bool	Account::makeWithdrawal( int withdrawal ) {
    int saldo = _amount - withdrawal;

    if (saldo >= 0) {
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        return true;
    }

    return false;
}
