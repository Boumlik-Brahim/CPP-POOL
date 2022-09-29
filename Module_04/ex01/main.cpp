/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:11:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 10:01:34 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    Animal *animaltab[4];

    int k = -1;
    while(++k < 4)
    {
        if(k < 2)
            animaltab[k] = new Cat();
        else
            animaltab[k] = new Dog();
    }

    k = -1;
    while(++k < 4)
    {
        if(k < 2)
            animaltab[k]->makeSound();
        else
            animaltab[k]->makeSound();
    }

    k = -1;
    while (++k < 4)
        delete animaltab[k];
    // delete j;//should not create a leak
    // delete i;

    system("leaks onfire");
    return 0;
}
