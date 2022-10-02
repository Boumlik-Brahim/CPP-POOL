/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 14:10:05 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    try
    {
        Bureaucrat obj(0, "bureaucrat");
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        /* handle exception */
    }
    
    // try
    // {
    //     Bureaucrat obj(255, "bureaucrat");
    //     /* do some stuff with bureaucrats */
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    //     /* handle exception */
    // }
    
    // Bureaucrat obj1;
    // try
    // {
    //     obj1.incrimentgrad();
    //     /* do some stuff with bureaucrats */
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    //     /* handle exception */
    // }
    
    // Bureaucrat obj1;
    // obj1.setGrade(150);
    // try
    // {
    //     obj1.decrimentgrad();
    //     /* do some stuff with bureaucrats */
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    //     /* handle exception */
    // }
    
    // std::cout << obj1 << std::endl;

    return 0;
}