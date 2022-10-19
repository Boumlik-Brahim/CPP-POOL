/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:19:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/19 17:41:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm> 
# include <iterator> 
# include <vector>
# include <array>
# include <deque>
# include <list>

class Nooccurrenceisfound: public std::exception
{
    public:
        virtual const char * what() const throw()
        {
            return("No occurrence is found");
        }
};

template <typename T>
void   easyfind(T intcontainer, int num)
{
    typename T::iterator end = intcontainer.end();
    typename T::iterator begin = intcontainer.begin();
    typename T::iterator finditer = std::find(begin, end, num);

    if(finditer == end)
        throw Nooccurrenceisfound();
    std::cout << *finditer << std::endl;
}

#endif