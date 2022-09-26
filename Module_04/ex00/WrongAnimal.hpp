/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:16:11 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 11:19:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	private:
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		
		WrongAnimal & operator = (const WrongAnimal &assign);
		
		~WrongAnimal();	
};

#endif