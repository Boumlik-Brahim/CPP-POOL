/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:01:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/04 09:00:51 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string	target );
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		PresidentialPardonForm & operator = (const PresidentialPardonForm &assign);

		void execute(Bureaucrat const & executor) const;

		~PresidentialPardonForm();		
};

#endif