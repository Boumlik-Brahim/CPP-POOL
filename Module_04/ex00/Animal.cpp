/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:57:43 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 18:13:07 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal.\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal.\e[0m" << std::endl;
}

Animal & Animal::operator = (const Animal &assign)
{
	(void) assign;
	return *this;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal.\e[0m" << std::endl;
}