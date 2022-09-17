/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:19:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/17 18:44:40 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include<cmath>
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

        // Fixed & operator + ( const Fixed &obj );
        // Fixed & operator - ( const Fixed &obj );
        // Fixed & operator * ( const Fixed &obj );
        // Fixed & operator / ( const Fixed &obj );

        float toFloat( void ) const;
        int toInt( void ) const;
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        ~Fixed();
};

bool operator > ( const Fixed &obj, const Fixed &obj1 );
bool operator < ( const Fixed &obj, const Fixed &obj1 );
bool operator >= ( const Fixed &obj, const Fixed &obj1 );
bool operator <= ( const Fixed &obj, const Fixed &obj1 );
bool operator == ( const Fixed &obj, const Fixed &obj1 );
bool operator != ( const Fixed &obj, const Fixed &obj1 );
std::ostream & operator << (std::ostream &outobj, const Fixed &obj);

#endif