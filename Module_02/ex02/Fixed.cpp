/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:18:59 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/21 16:45:47 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractionalbits = 8;

/*---------------------------------------------------------------------------------------------------*/

Fixed::Fixed( void ): fixedpointvalue(0) {}

Fixed::Fixed( const int intval )
{
    fixedpointvalue = intval << fractionalbits;
}

Fixed::Fixed( const float floatval )
{
    fixedpointvalue = roundf(floatval * (1 << fractionalbits));
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed & Fixed::operator = ( const Fixed &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        fixedpointvalue = obj.getRawBits();
    return *this;
}

/*---------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------------------------*/

float Fixed::toFloat( void ) const
{
    float result;
    
    result = fixedpointvalue / pow(2, fractionalbits);
    return(result);
}

int Fixed::toInt( void ) const
{
    int result;

    result = fixedpointvalue >> fractionalbits;
    return(result);
}

Fixed & Fixed::max( Fixed &fix1, Fixed &fix2 )
{
    if (fix1.fixedpointvalue > fix2.fixedpointvalue)
    {
        return (fix1);
    }
    return (fix2);
}

const Fixed & Fixed::max( const Fixed &fix1, const Fixed &fix2 )
{
    if (fix1.fixedpointvalue > fix2.fixedpointvalue)
    {
        return (fix1);
    }
    return (fix2);
}

Fixed & Fixed::min( Fixed &fix1, Fixed &fix2 )
{
    if (fix1.fixedpointvalue < fix2.fixedpointvalue)
    {
        return (fix1);
    }
    return (fix2);
}

const Fixed & Fixed::min( const Fixed &fix1, const Fixed &fix2 )
{
    if (fix1.fixedpointvalue < fix2.fixedpointvalue)
    {
        return (fix1);
    }
    return (fix2);
}

/*---------------------------------------------------------------------------------------------------*/

/*------------------------------increment and decrement operators-----------------------------------*/

Fixed & Fixed::operator ++ ( )
{   
    ++fixedpointvalue;
    return(*this);
}

Fixed Fixed::operator ++ ( int i )
{
    Fixed tmp(toFloat());

    fixedpointvalue++;
    return(tmp);
}

Fixed & Fixed::operator -- ( )
{
    --fixedpointvalue;
    return(*this);
}

Fixed Fixed::operator -- ( int i )
{
    Fixed tmp(toFloat());

    fixedpointvalue--;
    return(tmp);
}

/*------------------------------increment and decrement operators-----------------------------------*/

/*------------------------------Relational Operators Overloading------------------------------------*/

bool Fixed::operator > ( const Fixed &obj)
{
    return(fixedpointvalue > obj.fixedpointvalue);
}

bool Fixed::operator < ( const Fixed &obj )
{
    return(fixedpointvalue < obj.fixedpointvalue);
}

bool Fixed::operator >= ( const Fixed &obj )
{
    return(fixedpointvalue >= obj.fixedpointvalue);
}

bool Fixed::operator <= ( const Fixed &obj )
{
    return(fixedpointvalue <= obj.fixedpointvalue);
}

bool Fixed::operator == ( const Fixed &obj )
{
    return(fixedpointvalue == obj.fixedpointvalue);
}

bool Fixed::operator != ( const Fixed &obj )
{
    return(fixedpointvalue != obj.fixedpointvalue);
}

/*------------------------------Relational Operators Overloading------------------------------------*/

/*--------------------------------------------------------------------------------------------------*/

Fixed  Fixed::operator + ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue + obj.getRawBits();
    return(tmp);
}

Fixed  Fixed::operator - ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue - obj.getRawBits();
    return(tmp);
}

Fixed Fixed::operator * ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue * obj.toFloat();
    return(tmp);
}

Fixed  Fixed::operator / ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue / obj.toFloat();
    return(tmp);
}

/*--------------------------------------------------------------------------------------------------*/

/*----------------------------------Input/Output Operators Overloading------------------------------*/

std::ostream& operator << (std::ostream &outobj, const Fixed &obj)
{
    outobj << obj.toFloat();
    return(outobj);
}

/*----------------------------------Input/Output Operators Overloading------------------------------*/

/*--------------------------------------------------------------------------------------------------*/

int Fixed::getRawBits( void ) const
{
    return(this->fixedpointvalue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedpointvalue = raw;
}

/*--------------------------------------------------------------------------------------------------*/

Fixed::~Fixed() {}