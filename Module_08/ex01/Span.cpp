/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:48:46 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/18 11:50:58 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span()
{
    std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span( unsigned int N )
{
    std::cout << "\e[0;33mParametrized Constructor called of Span\e[0m" << std::endl;
    this->N = N;
    maximum.reserve(N);
}

void Span::addNumber( unsigned int N )
{
    if(maximum.size() >= N)
        throw Span::Elementsalreadystored();
    maximum.push_back(N);
}

int Span::shortestSpan()
{
    int shortest_span;

    if(maximum.size() <= 1)
        throw Span::Nospancanbefound();
    for(unsigned int i = 0; i < maximum.size() - 1; i++)
    {
        shortest_span = std::abs(maximum[i] - maximum[i + 1]);
        if(std::abs(maximum[i] - maximum[i + 1]) < shortest_span)
        {
            shortest_span = std::abs(maximum[i] - maximum[i + 1]);
        }
    }
    return(shortest_span);
}

int Span::longestSpan()
{
    if(maximum.size() <= 1)
        throw Span::Nospancanbefound();
    int min = *std::min_element(maximum.begin(), maximum.end());
    int max = *std::max_element(maximum.begin(), maximum.end());
    return(max - min);
}

const char * Span::Elementsalreadystored::what() const throw()
{
	return("Elementsalreadystored");
}

const char * Span::Nospancanbefound::what() const throw()
{
	return("Nospancanbefound");
}

void Span::addmanyNumber(std::vector<int>::iterator bg, std::vector<int>::iterator end)
{
    std::cout << "hgf" << std::endl;
    // if(bg < end)
    //     return ;
    // maximum.insert(maximum.end(),bg, end);
    unsigned long int i = 0;
    while (bg < end)
    {
        std::cout << "hgf" << std::endl;
        maximum.push_back(i);
        i++;
    }
}

Span::~Span()
{
    std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}