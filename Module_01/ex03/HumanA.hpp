/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/12 18:19:04 by bbrahim          ###   ########.fr       */
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
        std::string _name;
        Weapon      &_wepona;
    public:
        HumanA(std::string name, Weapon &wepona);
        
        void    attack();
        ~HumanA();
};


#endif