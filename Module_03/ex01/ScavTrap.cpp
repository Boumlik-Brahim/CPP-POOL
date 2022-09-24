/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:26:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 11:10:23 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	hitpoint = 100;
	energypoint = 50;
	attackdamage = 20;
	std::cout << "Default Constructor called of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {}

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
