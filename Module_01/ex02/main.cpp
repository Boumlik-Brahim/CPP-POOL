/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:24:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/03 17:46:00 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string *stringPTR ;
    std::string **stringREF ;
    std::string *str = new(std::nothrow) std::string;
    if (!str)
        return (0);

    *str = "HI THIS IS BRAIN";
    stringREF = &str;
    stringPTR = str;

    std::cout << "The memory address of str: " << str << std::endl;
    std::cout << "The memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address of stringREF: " << stringREF << std::endl;

    
    std::cout << "The value of str: " << *str << std::endl;
    std::cout << "The value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value of stringREF: " << *stringREF << std::endl;

    delete str;
    return(0);
}