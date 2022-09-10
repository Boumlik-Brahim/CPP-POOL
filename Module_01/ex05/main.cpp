/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:29:47 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/10 15:31:02 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{

    Harl    harlobject;
    
    harlobject.complain("DEBUG");
    harlobject.complain("INFO");
    harlobject.complain("WARNING");
    harlobject.complain("ERROR");
    return(0);
}