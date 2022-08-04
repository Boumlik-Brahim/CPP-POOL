/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/04 16:41:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon wepona)
{
    this->name = name;
    this->wepona = wepona;
}

void HumanA::attack()
{
    std::cout << this->name ;
    std::cout << " attacks with their " ;
    std::cout << this->wepona.getType() << std::endl;
}

HumanA::~HumanA(){}