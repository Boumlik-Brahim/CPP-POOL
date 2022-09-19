/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:17:22 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/19 14:17:44 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include<iostream>
class Fixed
{
    private:
        int                 fixedpointvalue;
        static const int    fractionalbits;
    public:
        Fixed( void );
        Fixed( const Fixed &obj );
        Fixed & operator = ( const Fixed &obj );
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        
        ~Fixed();
};

#endif