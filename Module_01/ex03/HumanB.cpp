/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:20 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:27:30 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack()
{
    std::cout << this->name ;
    std::cout << "attacks with their <weapon type>" ;
    std::cout << "<weapon type>" << std::endl;
}

HumanB::~HumanB(){}