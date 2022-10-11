/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:49:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/11 15:24:43 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char const *av[])
{
   if (ac != 2)
	{
		std::cout << "ERROR" << std::endl;
		exit(1);
	}
   Conversion obj(av[1]);
   obj.tochar();
   obj.toint();
   obj.tofloat();
   obj.todouble();

   return 0;
}