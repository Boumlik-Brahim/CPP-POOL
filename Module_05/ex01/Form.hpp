/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:34:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/30 17:24:38 by bbrahim          ###   ########.fr       */
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
		bool				signd;
		const std::string 	name;
		const int			gradesigned;
		const int			gradexecute;
	public:
		Form();
		// Form(const Form &copy);
		Form & operator=(const Form &assign);

		bool getSignd() const;
		const std::string getName() const;
		const int getGradesigned() const;
		const int getGradexecute() const;

		void beSigned(Bureaucrat &obj);

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