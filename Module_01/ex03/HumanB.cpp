/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:20 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/04 16:00:28 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon weponb)
{
    this->weponb = weponb;
}

void HumanB::attack()
{
    std::cout << this->name ;
    std::cout << " attacks with their " ;
    std::cout << this->weponb.getType() << std::endl;
}

HumanB::~HumanB(){}