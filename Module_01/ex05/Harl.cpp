/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:29:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/08 16:03:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl(){}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain( std::string level )
{
    void (Harl::*fptr)( void );

    if (level == "DEBUG")
    {
        fptr = &Harl::debug;
    }
    else if (level == "INFO")
    {
       fptr = &Harl::info;
    }
    else if (level == "WARNING")
    {
       fptr = &Harl::warning;
    }
    else if (level == "ERROR")
    {
       fptr = &Harl::error;
    }
    else
    {
        std::cout << "INVALID COMMENT" << std::endl;
    }
}

Harl::~Harl(){}