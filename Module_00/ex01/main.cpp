/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:13:05 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/01 13:21:41 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"

int main()
{
    PhoneBook   phonebook;
    Contact     contact;
    std::string input;

    while(1)
    {
        std::cout << "> " ;
        if (getline(std::cin,input).eof() == 1)
        {
            std::cout << "PHONEBOOK CLOSED" << std::endl;
            break;   
        }
        if(input == "ADD")
            phonebook.ft_addcontact();
        else if(input == "SEARCH")
            phonebook.ft_searchcontact();
        else if(input == "EXIT")
        {
            std::cout << "PHONEBOOK CLOSED" << std::endl;
            break;
        }
        else
            std::cout << "> INVALID INPUT TRY ANOTHER ONE" << std::endl;
    }
    return (0);
}