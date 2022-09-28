/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 09:41:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure &copy);
		
		Cure & operator=(const Cure &assign);
		
		AMateria* clone() const;
		void use(ICharacter& target);

		void settype(std::string type);

		~Cure();		
};

#endif