/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 18:48:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat obj(0,"baca");

    try
    {
        obj.incrimentgrad();
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        // std::cerr << e << std::endl;
        /* handle exception */
    }
    return 0;
}