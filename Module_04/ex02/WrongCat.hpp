/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:17:51 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 17:29:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
	private:
	
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		
		WrongCat & operator = (const WrongCat &assign);
		
		void	makeSound() const;

		~WrongCat();	
};

#endif