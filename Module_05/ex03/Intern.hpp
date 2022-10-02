/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:07:46 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 15:12:13 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &copy);

		Intern & operator = (const Intern &assign);

		Form * makeForm(std::string formName, std::string formTarget);

		class FormnameException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		~Intern();		
};

#endif