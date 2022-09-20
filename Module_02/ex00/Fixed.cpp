/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:18:00 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/20 14:26:48 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed( void ): fixedpointvalue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    fixedpointvalue = obj.getRawBits();
}

Fixed & Fixed::operator = ( const Fixed &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (fixedpointvalue == obj.fixedpointvalue)
        fixedpointvalue = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedpointvalue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedpointvalue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}