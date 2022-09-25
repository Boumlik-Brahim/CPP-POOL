/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 11:54:43 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
    ClapTrap    a("hamid");
    ScavTrap    b("mhamed");
    FragTrap    c("hmouda");

    a.attack(b.getname());
    a.takeDamage(5);
    a.beRepaired(2);

    b.attack(a.getname());
    b.takeDamage(5);
    b.beRepaired(3);
    b.guardGate();

    std::cout << "FragTrap name is: |" << c.getname() << "| FragTrap hitpoint is: |" << c.gethitpoint() 
    << "| FragTrap energypoint is: |" << c.getenergypoint() << "| FragTrap atackdamage is: |" << c.getattackdamage() << "|"
    << std::endl;

    c.attack(a.getname());
    c.takeDamage(5);
    c.beRepaired(4);
    c.highFivesGuys();
    
    std::cout << "FragTrap name is: |" << c.getname() << "| FragTrap hitpoint is: |" << c.gethitpoint() 
    << "| FragTrap energypoint is: |" << c.getenergypoint() << "| FragTrap atackdamage is: |" << c.getattackdamage() << "|"
    << std::endl;
    
    return 0;
}