/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:15 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:27:46 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(){}

void HumanA::attack()
{
    std::cout << this->name ;
    std::cout << "attacks with their <weapon type>" ;
    std::cout << "<weapon type>" << std::endl;
}

HumanA::~HumanA(){}