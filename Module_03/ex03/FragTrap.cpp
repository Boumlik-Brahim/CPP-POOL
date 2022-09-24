/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 11:09:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hitpoint = 100;
	energypoint = 100;
	attackdamage = 30;
	std::cout << "Default Constructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {}

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap(copy)
{
	std::cout << "Copy Constructor called of FragTrap" << std::endl;
}

FragTrap & FragTrap::operator = ( const FragTrap &assign )
{
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called of FragTrap" << std::endl;
}
