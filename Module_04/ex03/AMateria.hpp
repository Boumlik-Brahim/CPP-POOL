/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:07:09 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/27 15:14:03 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		
		AMateria & operator=(const AMateria &assign);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		~AMateria();	
};

#endif