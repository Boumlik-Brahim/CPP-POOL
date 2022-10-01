/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:33 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 09:19:56 by bbrahim          ###   ########.fr       */
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
		std::string	name;
		int			grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);

		const std::string	getName() const;
		int					getGrade() const;
		
		void	setGrade(int grade);
		void	setName(std::string name);

		void incrimentgrad( void );
		void decrimentgrad( void );

		void signForm(Form &f);

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

		~Bureaucrat();		
};

std::ostream& operator << (std::ostream &outobj, const Bureaucrat &obj);

#endif