/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 17:40:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "\e[0;33mDefault Constructor called of B\e[0m" << std::endl;
}

B::~B()
{
	std::cout << "\e[0;31mDestructor called of B\e[0m" << std::endl;
}