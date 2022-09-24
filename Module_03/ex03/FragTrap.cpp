/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 17:22:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called of FragTrap" << std::endl;
	hitpoint = 100;
	energypoint = 100;
	attackdamage = 30;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	std::cout << "parametrized Constructor called of FragTrap" << std::endl;
	this->name = name;
	hitpoint = 100;
	energypoint = 100;
	attackdamage = 30;
}

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap(copy)
{
	std::cout << "Copy Constructor called of FragTrap" << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap &assign)
{
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highFivesGuys" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called of FragTrap" << std::endl;
}