/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 22:00:20 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "7mar";
}

Animal::Animal(Animal const &animal){
    this->operator=(animal);
}
Animal& Animal::operator=(Animal const &animal){
    this->type = animal.type;
    return (*this);
}

void    Animal::makeSound(void){
    std::cout << "hhhhhhhh\n";
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called\n";
}
