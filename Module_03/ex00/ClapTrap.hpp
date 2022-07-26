/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:48 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 10:02:43 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include<iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hitpoint;
        int         energypoint;
        int         attackdamage;
    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap &obj );
        ClapTrap & operator = ( const ClapTrap &obj );

        void    attack( const std::string& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );

        std::string     getname( void ) const;
        int             gethitpoint( void ) const;
        int             getenergypoint( void ) const;
        int             getattackdamage( void ) const;

        ~ClapTrap();
};


#endif