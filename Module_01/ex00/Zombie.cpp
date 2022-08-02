/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:38:14 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/02 17:25:27 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie( std::string name )
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << this->name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}