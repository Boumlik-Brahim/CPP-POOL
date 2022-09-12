/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:20 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/11 18:24:02 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    weponb = NULL;
    this->name = name;
}

void HumanB::setWeapon(Weapon &weponb)
{
    this->weponb = &weponb;
}

void HumanB::attack()
{
    if (!weponb)
    {
        std::cout << "NO WEPON FOR HUMAIN B" << std::endl;
        exit(1);
    }
    std::cout << this->name ;
    std::cout << " attacks with their " ;
    std::cout << this->weponb->getType() << std::endl;
}

HumanB::~HumanB(){}