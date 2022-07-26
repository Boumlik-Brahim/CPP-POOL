/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:39:10 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 11:16:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter 
{
	private:
		std::string	name;
		AMateria*	inventory[4];
		int			nmbrofinventory;
	public:
		Character();
		Character( std::string name );
		Character(const Character &copy);

		Character & operator=(const Character &assign);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		~Character();		
};

#endif