/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 10:01:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
    ClapTrap a("hamid");
    
    std::cout << "ClapTrap name is: |" << a.getname() << "| ClapTrap hitpoint is: |" << a.gethitpoint() 
    << "| ClapTrap energypoint is: |" << a.getenergypoint() << "| ClapTrap atackdamage is: |" << a.getattackdamage() << "|"
    << std::endl;
    
    a.attack("mhamed");
    a.takeDamage(5);
    a.beRepaired(2); 
    
    std::cout << "ClapTrap name is: |" << a.getname() << "| ClapTrap hitpoint is: |" << a.gethitpoint() 
    << "| ClapTrap energypoint is: |" << a.getenergypoint() << "| ClapTrap atackdamage is: |" << a.getattackdamage() << "|"
    << std::endl;
    
    return 0;
}
