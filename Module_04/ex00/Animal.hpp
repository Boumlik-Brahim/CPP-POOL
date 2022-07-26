/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:57:30 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 14:22:09 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &copy);

		Animal & operator = (const Animal &assign);

		virtual void	makeSound() const;

		std::string getType() const;
		void setType( std::string type );

		virtual ~Animal();
};

#endif