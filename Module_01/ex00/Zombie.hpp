/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:38:11 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/04 14:25:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include<iostream>
#include<string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie( std::string name );

        void announce( void );
        
        
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif