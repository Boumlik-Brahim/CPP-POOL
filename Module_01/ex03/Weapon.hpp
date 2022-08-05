/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:25 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/05 15:34:20 by bbrahim          ###   ########.fr       */
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
        
        const std::string &getType() const;
        void setType(std::string type);
        
        ~Weapon();
};


#endif