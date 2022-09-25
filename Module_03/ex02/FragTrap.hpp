/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:22:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 11:34:32 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
#include"ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap( const FragTrap &copy );
		FragTrap( std::string name );

		FragTrap & operator = ( const FragTrap &assign );

		void	highFivesGuys( void );
		~FragTrap();
};

#endif