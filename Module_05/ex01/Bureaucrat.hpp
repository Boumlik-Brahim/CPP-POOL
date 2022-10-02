/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:33 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 15:40:40 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class Form;
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat( int grade, std::string name );

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

		const std::string	getName() const;
		int					getGrade() const;

		void	setGrade( int grade );

		void	incrimentgrad( void );
		void	decrimentgrad( void );

		void	signForm( Form &f );

		~Bureaucrat();		
};

std::ostream& operator << (std::ostream &outobj, const Bureaucrat &obj);

#endif