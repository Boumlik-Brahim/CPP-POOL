/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:48:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/18 10:22:50 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string> 
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

        void addNumber( unsigned int N );
        int shortestSpan();
        int longestSpan();

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

        void addmanyNumber(std::vector<int>::iterator bg, std::vector<int>::iterator end);

        ~Span();
};

#endif