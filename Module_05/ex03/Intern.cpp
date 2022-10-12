/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:08:36 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/12 15:29:50 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign)
{
	return *this;
}

const char * Intern::FormnameException::what() const throw()
{
	return("Form name doesn’t exist");
}

Form * Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string names[3] = {"Presidential request", "robotomy request", "Shrubbery request"};
	Form *res = NULL;
	int i = -1;
    while(++i < 3)
    {
        if(names[i] == formName)
            break ;
    }
    switch (i)
    {
        case 0:
			res = new(std::nothrow) PresidentialPardonForm(formTarget); 
			std::cout << "Intern creates " << formName << std::endl;
			return(res);
			break;
        case 1:
			res = new(std::nothrow) RobotomyRequestForm(formTarget); 
			std::cout << "Intern creates " << formName << std::endl;	
			return(res);
			break;
        case 2:
			res = new(std::nothrow) ShrubberyCreationForm(formTarget); 
			std::cout << "Intern creates " << formName << std::endl;	
			return(res);
            break;
        default:
            throw (Intern::FormnameException());
    }
}

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}