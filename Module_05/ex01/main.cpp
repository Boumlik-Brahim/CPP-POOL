/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 15:35:55 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form obj("form1", 0, 0, 0);
    Bureaucrat bureu;
    try
    {
        bureu.setGrade(0);
        bureu.setGrade(150);
        // bureu.setGrade(151);
        obj.beSigned(bureu);
        std::cout << obj.getSignd() << std::endl; 
        bureu.signForm(obj);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << obj << std::endl;
    std::cout << bureu << std::endl;

    return 0;
}