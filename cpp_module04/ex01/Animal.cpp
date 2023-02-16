/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 15:34:33 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor Called\n";
    this->type = "animal";
}

Animal::Animal(Animal const &animal){
    std::cout << "Animal Copy Constructor Called\n";
    this->operator=(animal);
}

Animal& Animal::operator=(Animal const &animal){
    this->type = animal.type;
    return (*this);
}

void    Animal::makeSound(void) const{
    std::cout << "animal voice\n";
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
