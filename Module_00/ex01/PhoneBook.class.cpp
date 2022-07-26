/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:48:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/26 11:54:27 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Constructor called" << std::endl;
}

void PhoneBook::ft_addcontact()
{
    std::string f_n;
    std::string l_n;
    std::string nikn;
    std::string phone_num;
    std::string dark_sec;
    
    std::cout << "FIRST NAME: ";
    getline(std::cin, f_n);
    std::cout << "LAST NAME: ";
    getline(std::cin, l_n);
    std::cout << "NICKNAME: ";
    getline(std::cin, nikn);
    std::cout << "PHONE NUMBER: ";
    getline(std::cin, phone_num);
    std::cout << "DARKEST SECRET: ";
    getline(std::cin, dark_sec);
    
}

void PhoneBook::ft_searchcontact()
{
    std::cout << "SEARCH CONTACT" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructor called" << std::endl;
}