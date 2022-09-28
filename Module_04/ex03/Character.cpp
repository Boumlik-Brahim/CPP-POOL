/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:39:19 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 11:47:50 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : nmbrofinventory(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character( std::string name ) : nmbrofinventory(0)
{
	this->name = name;
}

Character::Character(const Character &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}

Character & Character::operator=(const Character &assign)
{
	(void) assign;
	return *this;
}

std::string const & Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	if(nmbrofinventory < 4)
	{
		this->inventory[nmbrofinventory] = m;
		nmbrofinventory++;
		std::cout << "inventory " << name << " is equiped" << std::endl;
	}
	std::cout << "inventory " << name << " is not equiped" << std::endl;
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}

Character::~Character()
{
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}