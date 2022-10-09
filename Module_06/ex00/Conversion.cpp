/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:28:22 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/09 18:55:33 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << "\e[0;33mDefault Constructor called of Conversion\e[0m" << std::endl;
}

Conversion::Conversion(	std::string literal ): literal(literal)
{
	std::cout << "\e[0;33mParametrized Constructor called of Conversion\e[0m" << std::endl;
}

Conversion::Conversion(const Conversion &copy)
{
	this->literal = copy.literal;
	std::cout << "\e[0;33mCopy Constructor called of Conversion\e[0m" << std::endl;
}

Conversion & Conversion::operator=(const Conversion &assign)
{
	if(this != &assign)
	{
		this->literal = assign.literal;
	}
	return *this;
}

std::string Conversion::getliteral() const
{
	return(literal);
}

void Conversion::setliteral( std::string literal )
{
	this->literal = literal;
}

void Conversion::tochar( std::string literal )
{
	std::cout << "char: Non displayable" << std::endl;
}

void Conversion::toint( std::string literal )
{
	std::cout << "int: 0" << std::endl;
}

void Conversion::tofloat( std::string literal )
{
	std::cout << "float: 0.0f" << std::endl;
}

void todouble( std::string literal )
{
	std::cout << "double: 0.0" << std::endl;
}

Conversion::~Conversion()
{
	std::cout << "\e[0;31mDestructor called of Conversion\e[0m" << std::endl;
}