/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:40 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/15 22:41:55 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Default Constructor Called\n";
    this->type = "Dog";
}

Dog::Dog(Dog const &dog){
    std::cout << "Dog Copy Constructor Called\n";
    this->operator=(dog);
}

Dog& Dog::operator=(Dog const &dog){
    this->type = dog.type;
    return (*this);
}

void    Dog::makeSound(void) const{
    std::cout << "Bark Bark\n";
}

std::string Dog::getType(void) const{
    return (type);
}

void    Dog::setType(std::string type){
    this->type = type;
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called\n";
}
