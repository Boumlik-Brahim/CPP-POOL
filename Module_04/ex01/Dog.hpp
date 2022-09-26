/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:01:47 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 17:49:05 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	private:
		Brain* Dogbrain;
	public:
		Dog();
		Dog(const Dog &copy);

		Dog & operator = (const Dog &assign);

		void	makeSound() const;

		~Dog();		
};

#endif