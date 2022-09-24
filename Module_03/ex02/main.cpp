/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 17:19:34 by bbrahim          ###   ########.fr       */
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
    
    std::cout << "ClapTrap name is: |" << a.getname() << "| ClapTrap hitpoint is: |" << a.gethitpoint() 
    << "| ClapTrap energypoint is: |" << a.getenergypoint() << "| ClapTrap atackdamage is: |" << a.getattackdamage() << "|"
    << std::endl;

    a.attack(b.getname());
    a.takeDamage(5);
    a.beRepaired(5);
    
    std::cout << "ScavTrap name is: |" << b.getname() << "| ScavTrap hitpoint is: |" << b.gethitpoint() 
    << "| ScavTrap energypoint is: |" << b.getenergypoint() << "| ScavTrap atackdamage is: |" << b.getattackdamage() << "|"
    << std::endl;

    b.attack(a.getname());
    b.takeDamage(5);
    b.beRepaired(5);
    b.guardGate();
    
    std::cout << "FragTrap name is: |" << c.getname() << "| FragTrap hitpoint is: |" << c.gethitpoint() 
    << "| FragTrap energypoint is: |" << c.getenergypoint() << "| FragTrap atackdamage is: |" << c.getattackdamage() << "|"
    << std::endl;
    
    c.attack(a.getname());
    c.takeDamage(5);
    c.beRepaired(5);
    c.highFivesGuys();
    
    return 0;
}