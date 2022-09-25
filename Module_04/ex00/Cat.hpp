/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:57:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 18:10:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &copy);
		
		Cat & operator = (const Cat &assign);
		
		~Cat();		
};

#endif