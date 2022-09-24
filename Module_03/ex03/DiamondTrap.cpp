/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:51:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 17:46:51 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default Constructor called of DiamondTrap" << std::endl;
	this->hitpoint = FragTrap::hitpoint;
	this->energypoint = ScavTrap::energypoint;
	this->attackdamage = FragTrap::attackdamage;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap( name + "_clap_name" )
{
	std::cout << "parametrized Constructor called of DiamondTrap" << std::endl;
	this->name = name;
	this->hitpoint = FragTrap::hitpoint;
	this->energypoint = ScavTrap::energypoint;
	this->attackdamage = FragTrap::attackdamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &assign)
{
	return *this;
}

void    DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of DiamondTrap" << std::endl;
}