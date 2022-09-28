/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:51 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 17:36:43 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *instance;
	instance = new(std::nothrow) Cure;
	if(!instance)
		return(NULL);
	return(instance);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}

void Cure::settype(std::string type)
{
	this->type = type;
}

Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}