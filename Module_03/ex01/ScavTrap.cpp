/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:26:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 11:31:05 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Constructor called of ScavTrap" << std::endl;
	hitpoint = 100;
	energypoint = 50;
	attackdamage = 20;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "parametrized Constructor called of ScavTrap" << std::endl;
	this->hitpoint = 100;
	this->energypoint = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "Copy Constructor called of ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of ScavTrap" << std::endl;
}