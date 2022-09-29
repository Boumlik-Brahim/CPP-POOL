/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:39 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 18:48:04 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	std::cout << "\e[0;33mParametrized Constructor called of Bureaucrat\e[0m" << std::endl;
	this->grade = grade;
	this->name = name;
}

// Bureaucrat & Bureaucrat::operator = (const Bureaucrat &assign)
// {
// 	if(this != &assign)
// 	{
// 		this->grade = assign.grade;
// 		this->name =  assign.name;
// 	}
// 	return *this;
// }

const std::string Bureaucrat::getName() const
{
	return(this->name);
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::incrimentgrad( void )
{
	if (this->grade < 1)
	{
		throw "GradeTooHighException";
	}
	this->grade--;
}

void Bureaucrat::decrimentgrad( void )
{	
	if ( this->grade > 150)
	{
		throw "GradeTooLowException";
	}
	this->grade++;
}
		
std::ostream& operator << (std::ostream &outobj, const Bureaucrat &obj)
{
	outobj << obj.getName() << ", bureaucrat grade" << obj.getGrade();
    return(outobj);

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}