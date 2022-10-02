/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:07:46 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 11:15:54 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &copy);

		Intern & operator = (const Intern &assign);

		Form * makeForm(std::string formName, std::string formTarget);

		~Intern();		
};

#endif