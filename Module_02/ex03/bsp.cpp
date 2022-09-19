/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:54:52 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/19 12:00:54 by bbrahim          ###   ########.fr       */
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
    // std::cout << "x1=========" << a.getx() << std::endl;
    Fixed y1 = a.gety();
    // std::cout << "y1=========" << a.gety() << std::endl;
    Fixed x2 = b.getx();
    // std::cout << "x2=========" << b.getx() << std::endl;
    Fixed y2 = b.gety();
    // std::cout << "y2=========" << b.gety() << std::endl;
    Fixed x3 = p.getx();
    // std::cout << "x3=========" << p.getx() << std::endl;
    Fixed y3 = p.gety();
    // std::cout << "y3=========" << p.gety() << std::endl;

    area  = (x1.toFloat() * ( y2.toFloat() - y3.toFloat() ) + x2.toFloat() * (y3.toFloat() - y1.toFloat()) + x3.toFloat() * (y1.toFloat() - y2.toFloat())) / 2.0;
    // std::cout << area << std::endl;
    absolute(area);
    return(area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << "bgeter=========" << b.getx() << std::endl;
    std::cout << "bgeter=========" << b.gety() << std::endl;
    float ar = area(a, b, c);
    float a1 = area(point, b, c);
    float a2 = area(a, point, c);
    float a3 = area(a, b, point);

    return (ar == a1 + a2 + a3);
}