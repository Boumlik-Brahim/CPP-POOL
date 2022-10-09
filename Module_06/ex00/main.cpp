/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:49:06 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/09 18:55:25 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

// bool chkdisplayable()
// {
//    return(0);
// }

// bool chkchar()
// {
//    return(0);  
// }

// bool chkint()
// {  
//    return(0);
// }

// bool chkfloat()
// {  
//    return(0);
// }

// bool chkdouble()
// {
//    return(0);
// }

int main(int ac, char const *av[])
{
   if (ac != 2)
	{
		std::cout << "ERROR" << std::endl;
		exit(1);
	}
   Conversion obj(av[1]);
   std::cout << obj.getliteral() << std::endl;
   obj.setliteral("6");
   std::cout << obj.getliteral() << std::endl;

   return 0;
}