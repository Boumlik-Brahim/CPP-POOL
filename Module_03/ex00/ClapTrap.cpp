/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:51 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 18:07:04 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : hitpoint(10), energypoint(10), attackdamage(0) 
{
    std::cout << "Default Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): name(name), hitpoint(10), energypoint(10), attackdamage(0) 
{
    std::cout << "parametrized Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj)
{
    std::cout << "Copy Constructor called of ClapTrap" << std::endl;
    name = obj.name;
    hitpoint = obj.hitpoint;
    energypoint = obj.energypoint;
    attackdamage = obj.attackdamage;
}

ClapTrap & ClapTrap::operator = ( const ClapTrap &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        hitpoint = obj.hitpoint;
        energypoint = obj.energypoint;
        attackdamage = obj.attackdamage;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (hitpoint == 0)
    {
        std::cout << "No hit points" << std::endl;
        return ;
    }
    else if (energypoint == 0)
    {
        std::cout << "No energy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
    energypoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << ", loosing " << amount << " points of damage!" << std::endl;
    hitpoint -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energypoint == 0)
    {
        std::cout << "No energy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << ", repaired whith " << amount << " points" << std::endl;
    hitpoint += amount;
    energypoint--; 
}

std::string ClapTrap::getname( void ) const
{
    return(name);
}

int ClapTrap::gethitpoint( void ) const
{
    return(hitpoint);   
}

int ClapTrap::getenergypoint( void ) const
{
    return(energypoint);
}

int ClapTrap::getattackdamage( void ) const
{
    return(attackdamage);
}

ClapTrap::~ClapTrap()
{ 
    std::cout << "Destructor called of ClapTrap" << std::endl;
}