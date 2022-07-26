/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:56:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/26 10:37:15 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include<iostream>
#include<string>

#include"Contact.class.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();

        void ft_addcontact();
        void ft_searchcontact();

        ~PhoneBook();
};

#endif