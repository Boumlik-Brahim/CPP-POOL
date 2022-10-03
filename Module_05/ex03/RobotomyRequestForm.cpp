/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:00:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/03 14:47:46 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 72, 45, 1)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	this->target = "target";
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("Robotomy", 72, 45, 1)
{
	std::cout << "\e[0;33mParametrized Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getSignd() == 0)
	{
		throw (Bureaucrat::FormisnotsignedException());
	}
	else if( executor.getGrade() >= this->getGradexecute())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		srand(time(NULL));
    	if (rand() % 2)
		{
			std::cout << "drilling noises... " << std::endl;
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << this->target << " has not robotomized" << std::endl;
		}
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}