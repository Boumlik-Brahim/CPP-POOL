/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:50:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/27 18:42:24 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include"Account.hpp"

Account::Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << "i;" << "amount:" << "_amount;" << "created" << std::endl;
    
}

Account::Account( int initial_deposit )
{
    this->_nbDeposits = initial_deposit;
}

static void	Account::_displayTimestamp( void )
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

static int	Account::getNbAccounts( void )
{
    return (this->_nbAccounts);
}
static int	Account::getTotalAmount( void )
{
    return (this->_amount);
}
static int	Account::getNbDeposits( void )
{
    return (this->_nbDeposits);
}
static int	Account::getNbWithdrawals( void )
{
    return (this->_nbWithdrawals);
}

Account::~Account( void ){}