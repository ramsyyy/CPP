/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:02:53 by raaga             #+#    #+#             */
/*   Updated: 2022/10/21 16:32:46 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <iostream>
#include <ctime>



Account::Account( void ) {
    return ;
}

Account::Account( int initial_deposit ) {
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts - 1;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    return ;
}

Account::~Account( void ) {
    Account::_nbAccounts -= 1;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed"; 
    if (Account::_nbAccounts != 0) std::cout << std::endl;
    return ;
}

void    Account::_displayTimestamp( void ) {
    std::time_t now = std::time(NULL);
    struct tm *newe = localtime(&now);
     std::cout << "[" << newe->tm_year + 1900 
        << (newe->tm_mon + 1)/10 << (newe->tm_mon + 1)%10 
            <<  newe->tm_mday / 10 <<  newe->tm_mday % 10 
                << "_" << newe->tm_hour / 10 << newe->tm_hour % 10
                    << newe->tm_min / 10 << newe->tm_min % 10
                        << newe->tm_sec / 10 << newe->tm_min % 10
                            << "] ";
}


int Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int  Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";" ;
    std::cout << "total:" << Account::getTotalAmount() << ";" ;
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (withdrawal >= this->_amount)
    {
         std::cout << "withdrawal:refused" << std::endl;
        return (-1);
    }
    else
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        std::cout << "amount:" << this->_amount << ";";
        this->_nbWithdrawals++;
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        Account::_totalNbWithdrawals++;
    }
    return (1);
}

int Account::checkAmount( void ) const {
    return (this->_amount);
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" ;
    std::cout << "amount:" << checkAmount() << ";" ;
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;