/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:48:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/27 09:28:06 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(){}

void Contact::setfirst_name(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::setlast_name(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::setnickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::setphone_number(std::string phone_number)
{
    this->phone_number =  phone_number;
}
void Contact::setdarkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}


std::string Contact::getfirst_name()
{
    return (this->first_name);
}
std::string Contact::getlast_name()
{
    return (this->last_name);
}
std::string Contact::getnickname()
{
    return (this->nickname);
}
std::string Contact::getphone_number()
{
    return (this->phone_number);
}
std::string Contact::getdarkest_secret()
{
    return (this->darkest_secret);
}

Contact::~Contact(){}