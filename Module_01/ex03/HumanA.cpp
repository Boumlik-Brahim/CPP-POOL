/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/05 15:59:36 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

// HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon &wepona) : _wepona(wepona), _name(name) {}

void HumanA::attack() const
{
    std::cout << _name ;
    std::cout << " attacks with their " ;
    std::cout << _wepona.getType() << std::endl;
}

HumanA::~HumanA(){}