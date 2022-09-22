/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:48 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/22 16:02:00 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include<iostream>

class ClapTrap
{
    private:
        std::string     name;
        unsigned int    hitpoint;
        unsigned int    energypoint;
        unsigned int    attackdamage;
    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap &obj);
        ClapTrap & operator = ( const ClapTrap &obj );

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        ~ClapTrap();
};


#endif