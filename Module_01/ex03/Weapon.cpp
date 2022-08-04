/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/04 16:42:31 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(std::string type)
{
    std::cout << "type ====> " << type << std::endl;
    this->type = type;
    std::cout << "this->type ====> " << this->type << std::endl;
}

const std::string Weapon::getType()
{
    return(this->type);
}

Weapon::~Weapon(){}