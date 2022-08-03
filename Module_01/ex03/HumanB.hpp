/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:54:18 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:23:05 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include<iostream>
#include<string>
#include"Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon weponb;
    public:
        HumanB();
        HumanB(std::string name);

        void attack();
        
        ~HumanB();
};


#endif