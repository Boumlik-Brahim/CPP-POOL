/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:13:05 by bbrahim           #+#    #+#             */
/*   Updated: 2022/07/26 11:45:52 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.class.hpp"
#include"Contact.class.hpp"

int main()
{
    std::string input;
    
    PhoneBook   phonebook;
    Contact     contact;

    while(1)
    {
        std::cout << "> " ;
        getline(std::cin,input);
        if(input == "ADD")
        {
            phonebook.ft_addcontact();
        }        
        else if(input == "SEARCH")
        {
            std::cout << "> SEARCH" << std::endl;
        }
        else if(input == "EXIT")
        {
            break;
        }
        else
            std::cout << "> INVALID INPUT TRY ANOTHER ONE" << std::endl;
    }

    return (0);
}