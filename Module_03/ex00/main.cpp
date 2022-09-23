/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/23 16:20:23 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
    ClapTrap a("hamid");
    ClapTrap b("larbi");
    
    a.attack(b.getname());
    b.takeDamage(a.gethitpoint());
    a.beRepaired(5); 
    
    return 0;
}
