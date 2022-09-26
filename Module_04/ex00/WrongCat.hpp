/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:17:51 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 11:20:20 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

class WrongCat
{
	private:
	
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		
		WrongCat & operator = (const WrongCat &assign);
		
		~WrongCat();	
};

#endif