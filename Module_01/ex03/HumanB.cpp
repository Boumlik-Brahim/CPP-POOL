/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:20 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/11 11:12:48 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    weponb = nullptr;
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
        std::cout << "Humain B not armed" << std::endl;
        exit(1);
    }
    std::cout << this->name ;
    std::cout << " attacks with their " ;
    std::cout << this->weponb->getType() << std::endl;
}

HumanB::~HumanB(){}