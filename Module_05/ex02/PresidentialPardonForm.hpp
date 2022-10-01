/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:01:55 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/01 11:56:28 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>

class PresidentialPardonForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string	target );
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

		~PresidentialPardonForm();		
};

#endif