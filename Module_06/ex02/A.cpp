/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:35 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 17:39:46 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "\e[0;33mDefault Constructor called of A\e[0m" << std::endl;
}

A::~A()
{
	std::cout << "\e[0;31mDestructor called of A\e[0m" << std::endl;
}