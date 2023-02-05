/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/04 14:24:14 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Constructor Called\n";
    this->type = "7mar";
}

Animal::Animal(Animal const &animal){
    this->operator=(animal);
}
Animal& Animal::operator=(Animal const &animal){
    this->type = animal.type;
    return (*this);
}

void    Animal::makeSound(void) const{
    std::cout << "hhhhhhhh\n";
}

std::string Animal::getType(void) const{
    return (type);
}

void    Animal::setType(std::string type){
    this->type = type;
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called\n";
}
