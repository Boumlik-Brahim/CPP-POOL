/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:48:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/26 11:47:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.class.hpp"

Contact::Contact()
{
    std::cout << "Constructor called" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
    std::cout << "Destructor called" << std::endl;
}