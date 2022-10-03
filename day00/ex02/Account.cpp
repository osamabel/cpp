/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:45:18 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 14:03:25 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>

/************************************************************* STATIC MEMBERS */
int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	_totalAmount = 0;
}
/************************************************************* STATIC MEMBERS */

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
int Account::checkAmount( void ) const
{
	return (_amount);
}
void Account::displayStatus(void) const
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex ;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";p_amount:" << _amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount += _amount;
		std::cout << "index:" << _accountIndex ;
		std::cout << ";p_amount:" << _amount + withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		_totalAmount += _amount;
		std::cout << "index:" << _accountIndex ;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}
void Account::_displayTimestamp() {
    // http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", &tstruct);
    std::cout << std::setw(18);
    std::cout << buf;
}

