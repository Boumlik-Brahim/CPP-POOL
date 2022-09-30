/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:35:17 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/30 17:24:33 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): signd(0), gradesigned(0), gradexecute(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

// Form::Form(const Form &copy)
// {
// 	(void) copy;
// 	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
// }

Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
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
	outobj << obj.getName() ;
    return(outobj);
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}