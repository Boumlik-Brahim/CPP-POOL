/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/23 16:42:25 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ClapTrap    a;
    ScavTrap    b;
    
    a.attack("hamid");
    a.takeDamage(5);
    a.beRepaired(5);
    
    b.attack("brahim");
    b.takeDamage(5);
    b.beRepaired(5);
    b.guardGate();
    
    return 0;
}