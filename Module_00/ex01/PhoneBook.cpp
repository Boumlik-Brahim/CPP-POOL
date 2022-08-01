/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:48:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/01 13:22:03 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->cnt_index = 0;
    this->i = 0;
}

void PhoneBook::ft_addcontact()
{
    Contact     cnctobj; 
    std::string f_n;
    std::string l_n;
    std::string nikn;
    std::string phone_num;
    std::string dark_sec;

    std::cout << "FIRST NAME: ";
    if (getline(std::cin, f_n).eof() == 1)
        return ;
    cnctobj.setfirst_name(f_n);
    std::cout << "LAST NAME: ";
    if (getline(std::cin, l_n).eof() == 1)
        return ;
    cnctobj.setlast_name(l_n);
    std::cout << "NICKNAME: ";
    if (getline(std::cin, nikn).eof() == 1)
        return ;
    cnctobj.setnickname(nikn);
    std::cout << "PHONE NUMBER: ";
    if (getline(std::cin, phone_num).eof() == 1)
        return ;
    cnctobj.setphone_number(phone_num);
    std::cout << "DARKEST SECRET: ";
    if (getline(std::cin, dark_sec).eof() == 1)
        return ;
    cnctobj.setdarkest_secret(dark_sec);

    if (!(dark_sec.empty() || phone_num.empty() || nikn.empty() || l_n.empty() || f_n.empty()))
    {
        this->contacts[this->i % 8] = cnctobj;
        this->i++;
        if (this->i <= 8)
            this->cnt_index = this->i;
    }
}

void PhoneBook::ft_searchcontact()
{
    std::string str;
    int         index;
    int         i;
    
    std::cout << this->cnt_index << std::endl;
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
    std::cout << "ENTER THE INDEX : " ;
    getline(std::cin,str);
    std::stringstream(str) >> index;
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