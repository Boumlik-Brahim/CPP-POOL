/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:28:22 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/11 10:09:03 by bbrahim          ###   ########.fr       */
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
	return(this->literal);
}

void Conversion::setliteral( std::string literal )
{
	this->literal = literal;
}

bool isprintable( char c )
{
	if(c >= 0 && c < 32)
		return(EXIT_FAILURE);
	return(EXIT_SUCCESS);
}

void Conversion::tochar()
{
	int res = 0;

	try
	{
		res = stoi(this->literal);
		char c = static_cast<char>(res);
		if(isprintable(c) == EXIT_SUCCESS)
			std::cout << "char: '" << c << "'"<< std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "char: impossible" << std::endl;
	}
	catch (const std::out_of_range & e) 
	{
    	std::cerr << "Out of Range error: " << std::endl;
  	}
}

void Conversion::toint()
{
	int res = 0;

	try
	{
		res = stoi(this->literal);
		std::cout << "int: " << res << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	catch (const std::out_of_range & e) 
	{
    	std::cerr << "Out of Range error: " << std::endl;
  	}
}

void Conversion::tofloat()
{
	float res = 0;

	try
	{
		res = std::stof(this->literal);
		std::cout << "float: " << std::fixed << std::setprecision(1) << res << "f" << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	catch (const std::out_of_range & e) 
	{
    	std::cerr << "Out of Range error: " << std::endl;
  	}
}

void Conversion::todouble()
{
	double res = 0;

	try
	{
		res = std::stod(this->literal);
		std::cout << "double: " << res << std::endl;
	}
	catch (const std::invalid_argument & e)
	{
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range & e) 
	{
    	std::cerr << "Out of Range error: " << std::endl;
  	}
}

Conversion::~Conversion()
{
	std::cout << "\e[0;31mDestructor called of Conversion\e[0m" << std::endl;
}