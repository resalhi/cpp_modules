/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 15:44:43 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Dog dog;
    Cat cat;

    std::cout << dog.getType() << std::endl;
    std::cout << cat.getType() << std::endl;
    dog.makeSound();
    cat.makeSound();
}

