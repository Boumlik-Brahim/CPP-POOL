/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:00:22 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 14:13:44 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class RobotomyRequestForm : public Form
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm(const RobotomyRequestForm &copy);

		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);

		void execute(Bureaucrat const & executor) const;

		~RobotomyRequestForm();		
};

#endif