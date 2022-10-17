/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:19:13 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/17 11:56:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string> 


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
    for (unsigned long int i = 0; i <  sizeof(intcontainer) ; i++)
    {
        if (intcontainer[i] == num)
        {
            std::cout << intcontainer[i] << std::endl;
            return ;
        }
    }
    throw Nooccurrenceisfound();
    // std::cout << num << std::endl;
}

#endif