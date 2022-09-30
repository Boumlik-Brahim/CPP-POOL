/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:34:34 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/30 16:34:56 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Form
{
	private:
		std::string name;
		bool		signd;
		int			gradesigned;
		int			gradexecute;
	public:
		Form();
		Form(const Form &copy);

		std::string getName() const;
		bool getSignd() const;
		const int getGradesigned() const;
		const int getGradexecute() const;

		void beSigned(Bureaucrat obj);

		Form & operator=(const Form &assign);

		~Form();		
};

std::ostream& operator << (std::ostream &outobj, const Form &obj);

#endif