/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:02:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 09:58:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
	this->Dogbrain = new(std::nothrow) Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	this->type =  copy.type;
	this->Dogbrain = new(std::nothrow) Brain();
	*(this->Dogbrain) = *(copy.Dogbrain);
}

Dog & Dog::operator = (const Dog &assign)
{
	if (this != &assign)
	{
		this->type = assign.type;
		if(this->Dogbrain)
			delete this->Dogbrain;
		this->Dogbrain = new(std::nothrow) Brain();	
		this->Dogbrain = assign.Dogbrain;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "haaaaaw haaaaaaw haaaaw" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete this->Dogbrain;
}