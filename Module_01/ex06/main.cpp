/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:38:56 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/10 17:33:18 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    Harl    harlobject;
    
    if (ac != 2)
	{
		std::cout << "ERROR" << std::endl;
		exit(1);
	}
    harlobject.complain(av[1]);
    return(0);
}