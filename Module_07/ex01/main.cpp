/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:19:43 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/13 15:45:13 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main( void )
{
    int array[5] = {0,1,2,3,4};
    iter(array, 5, function);

    float flarr[5] = {0.0f,1.5f,2.5f,3.5f,4.5f};
    iter(flarr, 5, function);
    
    char arr[5] = {'a','b','c','d','e'};
    iter(arr, 5, function);

    return 0;
}