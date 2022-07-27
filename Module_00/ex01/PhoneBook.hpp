/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:56:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/27 11:01:41 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include<iostream>
#include<string>
#include<iomanip>
#include"Contact.hpp"

// ************************************************************************** //
//                               PhoneBook Class                              //
// ************************************************************************** //
class PhoneBook
{
    private:
        Contact contacts[8];
        int     cnt_index;
        int     i;
    public:
        PhoneBook();

        void ft_addcontact();
        void ft_searchcontact();

        ~PhoneBook();
};

#endif