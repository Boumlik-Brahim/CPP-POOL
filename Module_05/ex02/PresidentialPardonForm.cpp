/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:02:03 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 16:29:06 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential", 25, 5, 0)
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string	target ): Form("Presidential", 25, 5, 0)
{
	std::cout << "\e[0;33mParametrized Constructor called of PresidentialPardonForm\e[0m" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getSignd() != 0 && executor.getGrade() < 150)
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}