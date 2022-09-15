/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:22:07 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/15 15:47:13 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include<iostream>

class Fixed
{
    private:
        int                 fixedpointvalue;
        static const int    fractionalbits;
    public:
        Fixed( void );
        Fixed( const int intval );
        Fixed( const float floatval );
        Fixed( const Fixed &obj );
        Fixed & operator = ( const Fixed &obj );
        
        float toFloat( void ) const;
        int toInt( void ) const;
        void overload(std::ostream outobj);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        ~Fixed();
};


#endif