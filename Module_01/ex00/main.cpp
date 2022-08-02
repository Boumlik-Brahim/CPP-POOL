/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:47:28 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/02 18:24:08 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main( void )
{
    Zombie *z1 = z1->newZombie("hamid");
    Zombie *z2 = z2->newZombie("hanan");
    Zombie *z3 = z3->newZombie("banan");
    Zombie *z4;
    
    z1->announce();
    z2->announce();
    z3->announce();
    
    z4->randomChump("mhamd");

    delete z1;
    delete z2;
    delete z3;
    return(0);
}