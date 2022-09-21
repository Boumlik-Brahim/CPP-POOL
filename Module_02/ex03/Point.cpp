/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:55:05 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/21 15:50:57 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point( const Point &obj) : x(obj.x), y(obj.y) {}

Point & Point::operator = ( const Point &obj )
{
    return(*this);
}

Fixed Point::getx() const
{
    return( this->x ); 
}

Fixed Point::gety() const
{
    return( this->y );
}

Point::~Point(){}