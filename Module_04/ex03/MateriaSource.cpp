/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:36 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 17:38:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nmbrofmaterias(0)
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

void MateriaSource::learnMateria(AMateria* materia)
{
	if(nmbrofmaterias < 4)
	{
		this->materias[nmbrofmaterias] = materia;
		nmbrofmaterias++;
		std::cout << "materia " << materia->getType() << " is learned" << std::endl;
	}
	std::cout << "materia " << materia->getType() << " is not learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = -1;

	while(++i < 4)
	{
		if (this->materias[i]->getType() == type )
			return this->materias[i];
	}
	return(0);
}

MateriaSource::~MateriaSource()
{
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}