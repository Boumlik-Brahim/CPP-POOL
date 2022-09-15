/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:22:04 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/15 15:47:56 by bbrahim          ###   ########.fr       */
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
    
}

Fixed::Fixed( const float floatval )
{
    
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed & Fixed::operator = ( const Fixed &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(fixedpointvalue != obj.fixedpointvalue)
        fixedpointvalue = obj.getRawBits();
    return *this;
}

float Fixed::toFloat( void ) const
{

}

int Fixed::toInt( void ) const
{
    
}

void Fixed::overload(std::ostream outobj)
{
    
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