/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:02:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 18:37:05 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog & Dog::operator = (const Dog &assign)
{
	(void) assign;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "haaaaaw haaaaaaw haaaaw" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}