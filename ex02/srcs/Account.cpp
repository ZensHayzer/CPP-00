/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:28:40 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/31 14:30:35 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	i = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)	{
	this->_accountIndex = i;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	i++;
}

Account::~Account(void)	{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )	{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)	{
	return _totalAmount;
}

int	Account::getNbDeposits(void)	{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)	{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp(void)	{
	std::cout << "[19920104_091532]";
}

void	Account::displayAccountsInfos(void)	{
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
	
	return;
}

void	Account::displayStatus(void) const	{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
	
	return;
}

void	Account::makeDeposit(int deposit)	{
	
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << std::endl;
	
	return;
}

bool	Account::makeWithdrawal(int withdrawal)	{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "withdrawal:";
	if (withdrawal == 0 || withdrawal > this->_amount)	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";"
			<< "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return true;
}

int	Account::checkAmount(void) const	{
	return 0;
}