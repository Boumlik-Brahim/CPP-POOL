/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:34:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 10:42:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;
class Form
{
	private:
		const std::string 	name;
		bool				signd;
		const int			gradesigned;
		const int			gradexecute;
	public:
		Form();
		Form(const std::string name, const int gradesigned, const int gradexecute, bool	signd);

		const std::string	getName() const;
		bool				getSignd() const;
		const int			getGradesigned() const;
		const int			getGradexecute() const;

		void beSigned(Bureaucrat &obj);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		~Form();		
};

std::ostream& operator << (std::ostream &outobj, const Form &obj);

#endif