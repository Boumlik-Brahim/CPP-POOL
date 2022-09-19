/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:55:09 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/19 14:03:22 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include"Fixed.hpp"
#include<iostream>

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point( const Point &obj);
        
        Point & operator = ( const Point &obj );

        Fixed getx() const;
        Fixed gety() const;
        ~Point();
};

void    absolute( float &n );
float   area( const Fixed x1, const Fixed y1, const Fixed x2, const Fixed y2, const Fixed x3, const Fixed y3 );
bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif