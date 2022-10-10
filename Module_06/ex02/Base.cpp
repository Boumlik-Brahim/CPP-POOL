/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:19 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/10 18:45:07 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

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

// void identify(Base* p)
// {

// }

// void identify(Base& p)
// {

// }

Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}