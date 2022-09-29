/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:58:01 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 10:15:03 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->type = "Cat";
	this->catbrain = new(std::nothrow) Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	this->type =  copy.type;
	this->catbrain = new(std::nothrow) Brain();
	*(this->catbrain) = *(copy.catbrain);
}

Cat & Cat::operator = (const Cat &assign)
{
	if (this != &assign)
	{
		this->type = assign.type;
		if(this->catbrain)
			delete this->catbrain;
		this->catbrain = new(std::nothrow) Brain();
		this->catbrain = assign.catbrain;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meeeeeeeeeeeeeeeewwwwwwww" << std::endl;
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete this->catbrain;
}