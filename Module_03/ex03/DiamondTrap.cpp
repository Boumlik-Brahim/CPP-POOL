/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:51:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/23 14:33:44 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): name(name)
{
	std::cout << "parametrized Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of DiamondTrap" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &assign)
{
	(void) assign;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << " ClapTrap name is " << getname() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of DiamondTrap" << std::endl;
}