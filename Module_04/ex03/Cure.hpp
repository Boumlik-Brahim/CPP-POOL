/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/27 15:10:14 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

class Cure
{
	private:

	public:
		Cure();
		Cure(const Cure &copy);
		
		Cure & operator=(const Cure &assign);
		
		~Cure();		
};

#endif