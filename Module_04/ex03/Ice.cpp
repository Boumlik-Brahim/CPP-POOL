/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 17:36:51 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *instance;
	instance = new(std::nothrow) Ice;
	if(!instance)
		return(NULL);
	return(instance);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}

void Ice::settype(std::string type)
{
	this->type = type;
}

Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}