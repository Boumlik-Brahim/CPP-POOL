/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:48:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:32 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm> 
# include <vector>
# include <array>

class Span
{
    private:
        std::vector<int>    maximum;
        unsigned int        N;
    public:
        Span();
        Span( unsigned int N );
        Span(const Span &copy);
        Span & operator=(const Span &assign);

        void addNumber( unsigned int N );
        int shortestSpan();
        int longestSpan();
        void addmanyNumber(std::vector<int>::iterator bg, std::vector<int>::iterator end);

        class Elementsalreadystored: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

        class Nospancanbefound: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

        ~Span();
};

#endif