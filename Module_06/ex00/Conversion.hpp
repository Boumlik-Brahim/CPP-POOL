/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:28:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 14:13:12 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string> 
# include <iomanip> 

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

		void tochar();
		void toint();
		void tofloat();
		void todouble();

		~Conversion();		
};

bool isprintable( char c );

#endif