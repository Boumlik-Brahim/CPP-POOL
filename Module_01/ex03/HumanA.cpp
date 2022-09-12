/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/12 18:18:16 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wepona) : _name(name), _wepona(wepona) {}

void HumanA::attack()
{
    std::cout << _name ;
    std::cout << " attacks with their " ;
    std::cout << _wepona.getType() << std::endl;
}

HumanA::~HumanA(){}