/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:28:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/09 18:53:30 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string> 

class Conversion
{
	private:
		std::string literal;
	public:
		Conversion();
		Conversion(	std::string literal );
		Conversion( const Conversion &copy );

		Conversion & operator=(const Conversion &assign);

		std::string getliteral() const;
		void setliteral( std::string literal );

		void tochar( std::string literal );
		void toint( std::string literal );
		void tofloat( std::string literal );
		void todouble( std::string literal );

		~Conversion();		
};

#endif