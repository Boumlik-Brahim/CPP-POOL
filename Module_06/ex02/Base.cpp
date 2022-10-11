/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:19 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/11 11:28:00 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::Base()
{
	std::cout << "\e[0;33mDefault Constructor called of Base\e[0m" << std::endl;
}

Base * generate(void)
{
	srand(time(NULL));
	int res = (rand() % 3);

	Base *obj;
	switch (res)
	{
		case 0:
		{
			obj = new(std::nothrow) A;
			std::cout << "instanciate A" << std::endl;
			break;
		}
		case 1:
		{
			obj = new(std::nothrow) B;
			std::cout << "instanciate B" << std::endl;
			break;
		}
		case 2:
		{
			obj = new(std::nothrow) C;
			std::cout << "instanciate C" << std::endl;
			break;
		}
		default:
			std::cout << "nothing to instanciate" << std::endl;
			break;
	}
	return(obj);
}

void identify(Base* p)
{
	A *objA = dynamic_cast<A*>(p);
	if(objA)
	{
		std::cout << "The actual type of the object pointed to by p is A" << std::endl;
	}
	B *objB = dynamic_cast<B*>(p);
	if(objB)
	{
		std::cout << "The actual type of the object pointed to by p is B" << std::endl;
	}
	C *objC = dynamic_cast<C*>(p);
	if(objC)
	{
		std::cout << "The actual type of the object pointed to by p is C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		srand(time(NULL));
		int res = (rand() % 3);

		switch (res)
		{
			case 0:
			{
				A &objA = dynamic_cast<A &>(p);
				std::cout << "The actual type of the object pointed to by p is A" << std::endl;
				break;
			}
			case 1:
			{
				B &objB = dynamic_cast<B &>(p);
				std::cout << "The actual type of the object pointed to by p is B" << std::endl;
				break;
			}
			case 2:
			{
				C &objC = dynamic_cast<C &>(p);
				std::cout << "The actual type of the object pointed to by p is C" << std::endl;
				break;
			}
			default:
				std::cout << "No type" << std::endl;
				break;
		}
	}
	catch(const std::bad_cast & e)
	{
		std::cerr << "Bad cast error:" << std::endl;
	}
}

Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}