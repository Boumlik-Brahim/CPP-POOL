/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:35:17 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 15:39:33 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): signd(0), gradesigned(0), gradexecute(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name, const int gradesigned, const int gradexecute, bool	signd) : name(name), gradesigned(gradesigned), gradexecute(gradexecute), signd(signd)
{
	std::cout << "\e[0;33mParametrized Constructor called of Form\e[0m" << std::endl;
}

bool Form::getSignd() const
{
	return(this->signd);
}

const std::string Form::getName() const
{
	return(this->name);
}

const int Form::getGradesigned() const
{
	return(this->gradesigned);
}

const int Form::getGradexecute() const
{
	return(this->gradexecute);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= 1)
	{
		this->signd = 1;
	}
	else if ( obj.getGrade() > 150)
	{
		throw (Form::GradeTooLowException());
	}
}

void Form::execute(Bureaucrat const & executor) const {}

const char * Form::GradeTooHighException::what() const throw()
{
	return("GradeTooHighException");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}

std::ostream& operator << (std::ostream &outobj, const Form &obj)
{
	outobj << "Form name: "<< obj.getName() << " ,grade signed: " << obj.getGradesigned() << " ,grade executed: " << obj.getGradexecute() << " is signed: " << obj.getSignd();
    return(outobj);
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}