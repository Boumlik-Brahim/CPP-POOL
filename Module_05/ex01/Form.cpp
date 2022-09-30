/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:35:17 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/30 16:34:55 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): signd(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::string Form::getName() const
{
	return(this->name);
}

bool Form::getSignd() const
{
	return(this->signd);
}

const int Form::getGradesigned() const
{
	return(this->gradesigned);
}

const int Form::getGradexecute() const
{
	return(this->gradexecute);
}

void Form::beSigned(Bureaucrat obj)
{
	if (obj.getGrade() <= 1)
	{
		this->signd = 1;
	}
	else if ( obj.getGrade() > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
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