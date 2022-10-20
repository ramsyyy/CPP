/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:02:53 by raaga             #+#    #+#             */
/*   Updated: 2022/10/20 23:01:12 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <iostream>

_nbAccounts = 0;
_totalAmount = 0;
_totalNbDeposits = 0;
_totalNbWithdrawals = 0;

Account::Account( void ) {
    std::cout << "constructor called" << std::endl;
    return ;
}

Account::Account( int initial_deposit ) {
    (void)initial_deposit;
    std::cout << "constructor called" << std::endl;
    return ;
}

Account::~Account( void ) {
    std::cout << "destructor called" << std::endl;
    return ;
}

int Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int  Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "Account: " << getNbAccounts() << ";" ;
    std::cout << "total: " << getTotalAmount() << ";" ;
    std::cout << "deposits: " << getNbDeposits() << ";";
    std::cout << "withdrawals: " << getNbWithdrawals() << ";";
}


void Account::makeDeposit( int deposit ) {
    this->_amount += deposit;
    this->_nbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal >= this->_amount) return (0);
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
    }
    return (1);
}

int Account::checkAmount( void ) const {
    return (this->_amount);
}

void Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index: " << this->_accountIndex << ";" ;
    std::cout << "Amount: " << checkAmount() << ";" ;
    std::cout << "deposits: " << this->_nbDeposits << ";";
    std::cout << "withdrawals: " << this->_nbWithdrawals << ";";
}