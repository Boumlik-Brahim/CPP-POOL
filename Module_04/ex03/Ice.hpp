/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:26 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/27 15:09:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

class Ice
{
	private:

	public:
		Ice();
		Ice(const Ice &copy);

		Ice & operator=(const Ice &assign);

		~Ice();		
};

#endif