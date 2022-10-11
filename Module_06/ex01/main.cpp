/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:49:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/11 16:31:16 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(int ac, char const *av[])
{
   Data *obj = new Data;

   std::cout << obj << std::endl;
   uintptr_t res = serialize(obj);
   std::cout << res << std::endl;
   obj = deserialize(res);
   std::cout << obj << std::endl;

   delete obj;
   return 0;
}