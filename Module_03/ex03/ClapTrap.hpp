/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:55:48 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/24 11:58:07 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string     name;
        int    hitpoint;
        int    energypoint;
        int    attackdamage;
    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap &obj);
        ClapTrap & operator = ( const ClapTrap &obj );

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        std::string getname( void ) const;
        
        ~ClapTrap();
};


#endif