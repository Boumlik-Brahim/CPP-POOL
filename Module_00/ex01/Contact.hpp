/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:56:58 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/26 17:28:23 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include<string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();

        std::string getfirst_name();
        std::string getlast_name();
        std::string getnickname();
        std::string getphone_number();
        std::string getdarkest_secret();

        void setfirst_name(std::string first_name);
        void setlast_name(std::string last_name);
        void setnickname(std::string nickname);
        void setphone_number(std::string phone_number);
        void setdarkest_secret(std::string darkest_secret);

        ~Contact();
};

#endif