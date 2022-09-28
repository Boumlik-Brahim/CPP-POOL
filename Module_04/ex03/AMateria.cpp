/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:18 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 17:56:18 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

AMateria* AMateria::clone() const {}

void AMateria::use(ICharacter& target){}

AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}