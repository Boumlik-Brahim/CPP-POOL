/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 17:49:36 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("hamada");

    std::cout << "FragTrap name is: |" << d.getname() << "| FragTrap hitpoint is: |" << d.gethitpoint() 
    << "| FragTrap energypoint is: |" << d.getenergypoint() << "| FragTrap atackdamage is: |" << d.getattackdamage() << "|"
    << std::endl;
    
    d.attack("howa");
    d.takeDamage(1);
    d.beRepaired(1);
    d.whoAmI();
    
    return 0;
}