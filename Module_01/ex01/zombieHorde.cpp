/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:50:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/04 14:35:14 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    
    i = -1;
    Zombie *z = new(std::nothrow) Zombie[N];
    if(!z)
        return(NULL);
    
    while(++i < N)
    {
        z[i].setname(name);
    }
    return (z);
}