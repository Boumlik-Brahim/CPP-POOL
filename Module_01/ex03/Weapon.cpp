/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/05 15:34:50 by bbrahim          ###   ########.fr       */
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
    this->type = type;
}

const std::string &Weapon::getType() const
{
    return(this->type);
}

Weapon::~Weapon(){}