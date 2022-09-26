/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:16:11 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 17:40:30 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	private:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		
		WrongAnimal & operator = (const WrongAnimal &assign);
		
		void	makeSound() const;
		
		std::string getType() const;
		
		~WrongAnimal();	
};

#endif