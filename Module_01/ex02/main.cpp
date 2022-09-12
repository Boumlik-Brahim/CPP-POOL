/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:24:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/11 14:33:37 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string &stringREF = str;
    std::string *stringPTR = &str;
    
    std::cout << "The memory address of str: " << &str << std::endl;
    std::cout << "The memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address of stringREF: " << &stringREF << std::endl;

    std::cout << "The value of str: " << str << std::endl;
    std::cout << "The value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value of stringREF: " << stringREF << std::endl;
 
    return(0);
}