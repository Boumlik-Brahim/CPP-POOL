/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:48:46 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 17:16:19 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): datamember(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(const Data &copy)
{
	this->datamember = copy.datamember;
	std::cout << "\e[0;33mCopy Constructor called of Data\e[0m" << std::endl;
}

Data & Data::operator=(const Data &assign)
{
	if(this != &assign)
	{
		this->datamember = assign.datamember;
	}
	return *this;
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t res = reinterpret_cast<std::uintptr_t>(ptr);
	return(res);
}

Data* deserialize(uintptr_t raw)
{
	Data *obj;
	obj = reinterpret_cast<Data*>(raw);
	return(obj);
}

Data::~Data()
{
	std::cout << "\e[0;31mDestructor called of Data\e[0m" << std::endl;
}