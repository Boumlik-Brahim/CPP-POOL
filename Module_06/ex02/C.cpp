/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:25:02 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 17:40:48 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "\e[0;33mDefault Constructor called of C\e[0m" << std::endl;
}

C::~C()
{
	std::cout << "\e[0;31mDestructor called of C\e[0m" << std::endl;
}