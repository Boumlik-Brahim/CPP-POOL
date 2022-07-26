/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:22:04 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/21 16:42:24 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed( void ): fixedpointvalue(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int intval )
{
    std::cout << "Int constructor called" << std::endl;
    fixedpointvalue = intval << fractionalbits;
}

Fixed::Fixed( const float floatval )
{
    std::cout << "Float constructor called" << std::endl;
    fixedpointvalue = round(floatval * (1 << fractionalbits));
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed & Fixed::operator = ( const Fixed &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        fixedpointvalue = obj.getRawBits();
    return *this;
}

float Fixed::toFloat( void ) const
{
    float   result;

    result = fixedpointvalue / pow(2, fractionalbits);
    return(result);
}

int Fixed::toInt( void ) const
{
    int result;

    result = fixedpointvalue >> fractionalbits;
    return(result);
}

std::ostream& operator << (std::ostream &outobj, const Fixed &obj)
{
    outobj << obj.toFloat();
    return(outobj);
}

int Fixed::getRawBits( void ) const
{
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