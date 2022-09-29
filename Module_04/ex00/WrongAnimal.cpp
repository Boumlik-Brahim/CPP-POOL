/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:17:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 09:31:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
	this->type = copy.type;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal make sound" << std::endl;
}
		
std::string WrongAnimal::getType() const
{
	return(type);
}

void WrongAnimal::setType( std::string type )
{
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}
