/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/22 18:29:46 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of FragTrap" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	(void) assign;
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
