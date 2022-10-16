/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:19:41 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/16 11:57:00 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string> 

template <typename I>
void function(I arayaddress)
{
    std::cout << arayaddress << std::endl;
}

template <typename I>
void iter(I *arayaddress, int arraylenght, void function(I arayaddress))
{
    int i = -1;
    while(++i < arraylenght)
    {
        function(arayaddress[i]);
    }
}

#endif