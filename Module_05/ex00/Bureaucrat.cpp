/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:39 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/12 09:38:51 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): grade(1), name("Bureaucrat")
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): name(name), grade(grade)
{
	std::cout << "\e[0;33mParametrized Constructor called of Bureaucrat\e[0m" << std::endl;
	if (this->grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else if ( this->grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade)
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;	
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &assign)
{
	if(this != &assign)
	{
		this->grade = assign.grade;
	}
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return(this->name);
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
}

void Bureaucrat::incrimentgrad( void )
{
	this->grade--;
	if (this->grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
}

void Bureaucrat::decrimentgrad( void )
{	
	this->grade++;
	if ( this->grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return("GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}

std::ostream& operator << (std::ostream &outobj, const Bureaucrat &obj)
{
	outobj << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return(outobj);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}