/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 14:30:08 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("hamada");

    std::cout << "DiamondTrap name is: |" << d.getname() << "| DiamondTrap hitpoint is: |" << d.gethitpoint() 
    << "| DiamondTrap energypoint is: |" << d.getenergypoint() << "| DiamondTrap atackdamage is: |" << d.getattackdamage() << "|"
    << std::endl;
    
    d.attack("howa");
    d.takeDamage(5);
    d.beRepaired(1);
    d.whoAmI();
    
    std::cout << "DiamondTrap name is: |" << d.getname() << "| DiamondTrap hitpoint is: |" << d.gethitpoint() 
    << "| DiamondTrap energypoint is: |" << d.getenergypoint() << "| DiamondTrap atackdamage is: |" << d.getattackdamage() << "|"
    << std::endl;
    
    return 0;
}