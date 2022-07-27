/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:48:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/27 17:31:54 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook(){}

void PhoneBook::ft_addcontact()
{
    bool flag;
    
    Contact cnctobj;
    
    std::string f_n;
    std::string l_n;
    std::string nikn;
    std::string phone_num;
    std::string dark_sec;

    std::cout << "FIRST NAME: ";
    getline(std::cin, f_n);
    if (f_n.empty() == true)
        flag = true;
    cnctobj.setfirst_name(f_n);
    
    std::cout << "LAST NAME: ";
    getline(std::cin, l_n);
    if (l_n.empty() == true)
        flag = true;
    cnctobj.setlast_name(l_n);
    
    std::cout << "NICKNAME: ";
    getline(std::cin, nikn);
    if (nikn.empty() == true)
        flag = true;
    cnctobj.setnickname(nikn);
    
    std::cout << "PHONE NUMBER: ";
    getline(std::cin, phone_num);
    if (phone_num.empty() == true)
        flag = true;
    cnctobj.setphone_number(phone_num);
    
    std::cout << "DARKEST SECRET: ";
    getline(std::cin, dark_sec);
    if (dark_sec.empty() == true)
        flag = true;
    cnctobj.setdarkest_secret(dark_sec);

    if(flag == false)
    {
        this->contacts[this->i % 8] = cnctobj;
        this->i++;
        if (this->i <= 8)
            this->cnt_index = this->i;
    }
}

void PhoneBook::ft_searchcontact()
{
    int index;
    int i;
    
    i = -1;
    std::cout << "|" << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << std::endl;
    while(++i < this->cnt_index)
    {
        std::cout << "|" << std::setw(10) << i  << "|";
        std::cout << std::setw(10) << this->contacts[i].getfirst_name().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->contacts[i].getlast_name().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << this->contacts[i].getnickname().substr(0, 9) + "." << "|" << std::endl;
    }
    
    std::cout << "ENTER THE INDEX : ";
    std::cin >> index ;

    if (index > this->cnt_index || index < 0)
        std::cout << "INVALID INDEX" << std::endl;
    else
    {
        std::cout << "FIRST NAME: " << this->contacts[index].getfirst_name() << std::endl;
        std::cout << "LAST NAME: " << this->contacts[index].getlast_name() << std::endl;
        std::cout << "NICKNAME: " << this->contacts[index].getnickname() << std::endl;
        std::cout << "PHONE NUMBER: " << this->contacts[index].getphone_number() << std::endl;
        std::cout << "DARKEST SECRET: " << this->contacts[index].getdarkest_secret() << std::endl;
    }
}

PhoneBook::~PhoneBook(){}