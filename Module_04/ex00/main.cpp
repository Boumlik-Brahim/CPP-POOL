/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:11:49 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/29 09:33:11 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* metawrong = new WrongAnimal();
    const WrongAnimal* iwrong = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    

    std::cout << iwrong->getType() << " " << std::endl;
    iwrong->makeSound();
    metawrong->makeSound();

    delete meta;
    delete j;
    delete i;
    
    delete metawrong;
    delete iwrong;

    system("leaks Polymorphism");

    return 0;
}
