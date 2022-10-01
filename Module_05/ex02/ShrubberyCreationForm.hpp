/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:01:07 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 14:13:25 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &assign);

		void execute(Bureaucrat const & executor) const;

		~ShrubberyCreationForm();		
};

#endif