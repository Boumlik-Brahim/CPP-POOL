/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:40 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/16 11:44:34 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string> 

template <typename T>
void swap(T &a,T &b )
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a,T b)
{
    if(a >= b)
        return(b);
    else
        return(a);
}

template <typename T>
T max(T a,T b)
{
    if(a >= b)
        return(a);
    else
        return(b);
}

#endif