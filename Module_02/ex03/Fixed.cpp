/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:54:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/18 18:58:02 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed::fractionalbits = 8;

/*-----------------------------------------------------------------------------------------------*/

Fixed::Fixed( void ): fixedpointvalue(0) {}

Fixed::Fixed( const int intval )
{
    fixedpointvalue = intval << fractionalbits;
}

Fixed::Fixed( const float floatval )
{
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
    if(fixedpointvalue != obj.fixedpointvalue)
        fixedpointvalue = obj.getRawBits();
    return *this;
}

/*-----------------------------------------------------------------------------------------------*/

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

/*-----------------------------------------------------------------------------------------------*/

Fixed & Fixed::operator ++ ( )
{   
    ++fixedpointvalue;
    return(*this);
}

Fixed Fixed::operator ++ ( int i)
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

Fixed Fixed::operator -- ( int i)
{
    Fixed tmp(toFloat());

    fixedpointvalue--;
    return(tmp);
}

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

Fixed  Fixed::operator + ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue + obj.toInt();
    return(tmp);
}

Fixed  Fixed::operator - ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue - obj.toInt();
    return(tmp);
}

Fixed Fixed::operator * ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue * obj.toInt();
    return(tmp);
}

Fixed  Fixed::operator / ( const Fixed &obj )
{
    Fixed tmp;
    
    tmp.fixedpointvalue = fixedpointvalue / obj.toInt();
    return(tmp);
}

std::ostream& operator << (std::ostream &outobj, const Fixed &obj)
{
    outobj << obj.toFloat();
    return(outobj);
}

/*-----------------------------------------------------------------------------------------------*/

int Fixed::getRawBits( void ) const
{
    return(this->fixedpointvalue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedpointvalue = raw;
}

/*-----------------------------------------------------------------------------------------------*/

Fixed::~Fixed() {}