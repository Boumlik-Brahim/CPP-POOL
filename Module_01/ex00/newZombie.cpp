/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:36:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/02 17:22:58 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *z = new(std::nothrow) Zombie(name);
    if(!z)
        return(NULL);
    return (z);
}
