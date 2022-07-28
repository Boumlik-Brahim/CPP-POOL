/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:56:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/28 18:36:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include<iostream>
# include<string>
# include<sstream>
# include<iomanip>
# include"Contact.hpp"
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