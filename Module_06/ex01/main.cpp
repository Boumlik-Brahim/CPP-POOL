/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:49:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 17:19:38 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(int ac, char const *av[])
{
   Data *obj;

   uintptr_t res = serialize(obj);
   std::cout << serialize(obj) << std::endl;
   obj = deserialize(res);
   std::cout << obj << std::endl;

   return 0;
}