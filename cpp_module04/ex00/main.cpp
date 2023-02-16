/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 13:13:35 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta1 = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    cat->makeSound();
    meta1->makeSound();
    meta2->makeSound();
    return 0;
}
