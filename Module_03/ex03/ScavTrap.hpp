/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:26:19 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/25 14:27:14 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include"ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
{
	private:
	
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap( std::string name );

		ScavTrap & operator = (const ScavTrap &assign);

		void	guardGate();
		~ScavTrap();	
};

#endif