/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:36 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 10:41:37 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	(void) assign;
	return *this;
}

void MateriaSource::learnMateria(AMateria*)
{
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}

MateriaSource::~MateriaSource()
{
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}