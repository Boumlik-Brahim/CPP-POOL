/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:48:57 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/20 17:11:24 by bbrahim          ###   ########.fr       */
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
    
    // Span sp = Span(1000000);

    // int i = -1;
    // while(++i < 1000000)
    // {
    //     sp.addNumber(i);
    // }

    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // std::vector<int>    v;
    // v.push_back(6);
    // v.push_back(3);
    // v.push_back(17);
    // v.push_back(9);
    // v.push_back(11);
    // std::vector<int>::iterator itrb = v.begin();
    // std::vector<int>::iterator itre = v.end();

    // Span sp = Span(6);
    // sp.addmanyNumber(itrb,itre);
    
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // try
    // {
    //     Span sp = Span(2);   
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(4);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // try
    // {
    //     Span sp = Span(2);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    return 0;
}