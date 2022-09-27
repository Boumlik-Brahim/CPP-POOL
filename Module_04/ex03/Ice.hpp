/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:26 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/27 18:19:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice &copy);

		Ice & operator=(const Ice &assign);

		AMateria* clone() const;
		void use(ICharacter& target);
		
		void settype(std::string type);

		~Ice();		
};

#endif