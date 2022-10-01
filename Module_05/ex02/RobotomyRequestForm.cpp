/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:00:27 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 16:31:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 72, 45, 0)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("Robotomy", 72, 45, 0)
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
	if(this->getSignd() != 0 && executor.getGrade() < 150)
	{
		std::cout << "drilling noises " << std::endl;
		std::cout << this->target << "has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}