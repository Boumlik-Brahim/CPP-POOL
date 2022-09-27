/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:51 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/27 15:10:42 by bbrahim          ###   ########.fr       */
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

Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}