/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:56:29 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/28 14:08:11 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias[4];
		int			nmbrofmaterias;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		
		MateriaSource & operator=(const MateriaSource &assign);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		~MateriaSource();		
};

#endif