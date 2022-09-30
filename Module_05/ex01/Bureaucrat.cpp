/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:39 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/30 16:30:44 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): grade(1), name("Bureaucrat")
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	std::cout << "\e[0;33mParametrized Constructor called of Bureaucrat\e[0m" << std::endl;
	this->name = name;
	this->grade = grade;
	if (this->grade < 1)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else if ( this->grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
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

void  Bureaucrat::setName(std::string name)
{
	this->name = name;
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

void Bureaucrat::signForm(Form f)
{
	if(f.getSignd() != 0)
	{
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << "<reason>" << "." << std::endl;
	}
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