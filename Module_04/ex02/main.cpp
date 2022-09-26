/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:11:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/26 18:41:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    Animal *animaltab = new Animal[10];

    int k = -1;
    while(++k < 5)
        animaltab[k] = new Cat();
    while(++k < 10)
        animaltab[k] = new Dog();

    delete j;//should not create a leak
    delete i;

    delete[] animaltab;

    return 0;
}
