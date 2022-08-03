/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:25 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:28:34 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include<iostream>
#include<string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        
        void setType(std::string type);
        const std::string getType();
        
        ~Weapon();
};


#endif