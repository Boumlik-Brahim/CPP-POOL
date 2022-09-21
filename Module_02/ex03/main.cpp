/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:58:47 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/21 16:17:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"
#include"Fixed.hpp"
#include <iostream>

int main()
{
    // Point a(0, 0);
    // Point b(20, 0);
    // Point c(10, 30);
    // Point Point(10, 15);
    
    // Point a(0, 3.02);
    // Point b(2.5, 0);
    // Point c(5, 3.2);
    // // Point Point(1.5, 1.5);
    // // Point Point(4.18, 3.02);
    // Point Point(5.18, 3.02);
    Point a(0, 0);
    Point b(5.12, 4.16);
    Point c(1.18, -6.49);
    Point Point(2.56, 2.08);
    // Point Point(4.18, 3.02);
    
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
