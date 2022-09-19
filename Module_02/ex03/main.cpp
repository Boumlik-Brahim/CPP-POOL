/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:58:47 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/19 12:06:21 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"
#include"Fixed.hpp"
#include <iostream>

int main()
{
    Point a(0, 0);
    // std::cout << "ageter=========" << a.getx() << std::endl;
    // std::cout << "ageter=========" << a.gety() << std::endl;
    Point b(20, 0);
    // std::cout << "bgeter=========" << b.getx() << std::endl;
    // std::cout << "bgeter=========" << b.gety() << std::endl;
    Point c(10, 30);
    Point Point(10, 15);
    // std::cout << "cgeter=========" << c.getx() << std::endl;
    // std::cout << "cgeter=========" << c.gety() << std::endl;
    
    if (bsp(a, b, c, Point))
    {
        std::cout << "is inside" << std::endl;
    }
    else
    {
        std::cout << "is not inside" << std::endl;
    }
    return 0;
}
