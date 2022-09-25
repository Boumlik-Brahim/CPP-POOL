/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 11:26:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ClapTrap    a("hamid");
    ScavTrap    b("mhamed");
    
    std::cout << "ClapTrap name is: |" << a.getname() << "| ClapTrap hitpoint is: |" << a.gethitpoint() 
    << "| ClapTrap energypoint is: |" << a.getenergypoint() << "| ClapTrap atackdamage is: |" << a.getattackdamage() << "|"
    << std::endl;

    a.attack(b.getname());
    a.takeDamage(5);
    a.beRepaired(2);
    
    std::cout << "ClapTrap name is: |" << a.getname() << "| ClapTrap hitpoint is: |" << a.gethitpoint() 
    << "| ClapTrap energypoint is: |" << a.getenergypoint() << "| ClapTrap atackdamage is: |" << a.getattackdamage() << "|"
    << std::endl;
    
    std::cout << "-----------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "ScavTrap name is: |" << b.getname() << "| ScavTrap hitpoint is: |" << b.gethitpoint() 
    << "| ScavTrap energypoint is: |" << b.getenergypoint() << "| ScavTrap atackdamage is: |" << b.getattackdamage() << "|"
    << std::endl;

    b.attack(a.getname());
    b.takeDamage(5);
    b.beRepaired(3);
    b.guardGate();
    
    std::cout << "ScavTrap name is: |" << b.getname() << "| ScavTrap hitpoint is: |" << b.gethitpoint() 
    << "| ScavTrap energypoint is: |" << b.getenergypoint() << "| ScavTrap atackdamage is: |" << b.getattackdamage() << "|"
    << std::endl;

    return 0;
}