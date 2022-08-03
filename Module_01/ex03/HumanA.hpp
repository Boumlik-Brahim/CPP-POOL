/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:24:57 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include<iostream>
#include<string>
#include"Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon wepona;
    public:
        HumanA();
        HumanA(std::string name, Weapon wepona);
        
        void attack();
        
        ~HumanA();
};


#endif