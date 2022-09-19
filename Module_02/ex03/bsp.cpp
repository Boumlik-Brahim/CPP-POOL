/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:54:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/19 14:02:45 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

void absolute( float &n )
{
    if ( n < 0 )
        n = n * -1;
}

float area( Point const a, Point const b, Point const p )
{
    float area;
    
    Fixed x1 = a.getx();
    Fixed y1 = a.gety();
    Fixed x2 = b.getx();
    Fixed y2 = b.gety();
    Fixed x3 = p.getx();
    Fixed y3 = p.gety();

    area  = (x1.toFloat() * ( y2.toFloat() - y3.toFloat() ) + x2.toFloat() * (y3.toFloat() - y1.toFloat()) + x3.toFloat() * (y1.toFloat() - y2.toFloat())) / 2.0;
    absolute(area);
    return(area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float ar = area(a, b, c);
    float a1 = area(point, b, c);
    float a2 = area(a, point, c);
    float a3 = area(a, b, point);
    return (ar == a1 + a2 + a3);
}