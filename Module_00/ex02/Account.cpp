/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:50:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/28 16:09:00 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include"Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){}

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;

    _totalAmount = _totalAmount + this->_amount;
    _nbAccounts++;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" ; 
    std::cout << "amount:" << this->_amount << ";" ;
    std::cout << "created" << std::endl ;
}


void	Account::makeDeposit( int deposit )
{
    int p_amount;
    
    p_amount = this->_amount;  
    this->_nbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _totalNbDeposits = _totalNbDeposits + this->_nbDeposits;
    this->_amount = this->_amount +  deposit;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" ;
    std::cout << "p_amount:" << p_amount << ";" ;
    std::cout << "deposits:" << deposit << ";" ;
    std::cout << "amount:" << this->_amount << ";" ; 
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    int p_amount;

    p_amount = this->_amount;
    this->_nbWithdrawals++;
    
    if (withdrawal > this->_amount)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" ;
        std::cout << "p_amount:" <<  p_amount << ";" ;
        std::cout << "withdrawal:refused" << std::endl ;   
    }
    else
    {
        _totalAmount = _totalAmount - withdrawal;
        _totalNbWithdrawals = _totalNbWithdrawals + this->_nbWithdrawals;
        this->_amount = this->_amount - withdrawal;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";" ;
        std::cout << "p_amount:" << p_amount << ";" ;
        std::cout << "withdrawal:" << withdrawal << ";" ;
        std::cout << "amount:" << this->_amount << ";" ;
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl ;
    }
    return(0);
}

int		Account::checkAmount( void ) const
{
    return(0);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" ; 
    std::cout << "amount:" << this->_amount << ";" ;
    std::cout << "deposits:"  << this->_nbDeposits << ";" ;
    std::cout << "withdrawals:"  << this->_nbWithdrawals << std::endl ;
}
    
void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    
    std::cout << "[" << (now->tm_year + 1900) ;
    std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) ;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_mday ;
    std::cout << "_" ;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_hour ; 
    std::cout << std::setw(2) << std::setfill('0') << now->tm_min ;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";" ;
    std::cout << "total:" << getTotalAmount() << ";" ;
    std::cout << "deposits:" << getNbDeposits() << ";" ;
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl ;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" ;
    std::cout << "amount:" << this->_amount << ";" ;
    std::cout << "closed" << std::endl ;
}