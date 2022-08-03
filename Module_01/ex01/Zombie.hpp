/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:51:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 11:15:17 by bbrahim          ###   ########.fr       */
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
        Zombie* zombieHorde( int N, std::string name );
        
        ~Zombie();
};

#endif