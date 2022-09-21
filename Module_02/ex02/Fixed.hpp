/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:19:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/21 13:17:24 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

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

        float   toFloat( void ) const;
        int     toInt( void ) const;

        static Fixed & max( Fixed &fix1, Fixed &fix2 );
        static const Fixed & max( const Fixed &fix1, const Fixed &fix2 );
        static Fixed & min( Fixed &fix1, Fixed &fix2 );
        static const Fixed & min( const Fixed &fix1, const Fixed &fix2 );

        Fixed & operator ++ ( );
        Fixed & operator -- ( );
        Fixed   operator ++ ( int );
        Fixed   operator -- ( int );

        Fixed   operator + ( const Fixed &obj );
        Fixed   operator - ( const Fixed &obj );
        Fixed   operator * ( const Fixed &obj );
        Fixed   operator / ( const Fixed &obj );

        bool    operator > ( const Fixed &obj );
        bool    operator < ( const Fixed &obj );
        bool    operator >= ( const Fixed &obj );
        bool    operator <= ( const Fixed &obj );
        bool    operator == ( const Fixed &obj );
        bool    operator != ( const Fixed &obj );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        ~Fixed();
};

std::ostream & operator << (std::ostream &outobj, const Fixed &obj);

#endif