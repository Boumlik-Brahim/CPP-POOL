/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:01:26 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 17:20:22 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery", 145, 137, 1)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	this->target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("Shrubbery", 145, 137, 1)
{
	std::cout << "\e[0;33mParmetrized Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getSignd() == 0)
	{
		throw (Bureaucrat::FormisnotsignedException());
	}
	else if( executor.getGrade() <= this->getGradexecute() )
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::string	isciitree = " 	   _-_ 			\n"
    							"	/~~   ~~\\ 		\n"
 								" /~~         ~~\\ 	\n"
								"{               } 	\n"
 								" \\  _-     -_  / 	\n"
   								"   ~  \\\\ //  ~ 	\n"
								"_- -   | | _- _ 	\n"
  								"  _ -  | |   -_ 	\n"
      							"	  // \\\\ 	";
		
		std::cout << this->target << " executed" << std::endl;
		std::string 	filename = this->target;
		filename += "_shrubbery";
		std::ofstream	out_file(filename);
		if (!out_file)
		{
			std::cout << "file creation failed" << std::endl;
			exit(1);
		}
		out_file << isciitree;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}