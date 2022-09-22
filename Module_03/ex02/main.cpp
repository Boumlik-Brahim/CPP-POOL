/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/22 18:42:11 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
    ClapTrap    a;
    ScavTrap    b;
    FragTrap    c;
    
    
    a.attack("hamid");
    a.takeDamage(5);
    a.beRepaired(5);
    
    b.attack("brahim");
    b.takeDamage(3);
    b.beRepaired(3);
    b.guardGate();

    c.attack("boumlik");
    c.takeDamage(2);
    c.beRepaired(2);
    c.highFivesGuys();
    
    return 0;
}