/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:48:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/17 17:52:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // std::vector<int> orderedSides;
    // orderedSides.push_back(1);
    // orderedSides.push_back(2);
    // orderedSides.push_back(3);
    // orderedSides.push_back(4);
    // orderedSides.push_back(5);

    // int min = *std::min_element(orderedSides.begin(), orderedSides.end());
    // std::cout << min << std::endl;
    // int max = *std::max_element(orderedSides.begin(), orderedSides.end());
    // std::cout << max << std::endl;

    return 0;
}
