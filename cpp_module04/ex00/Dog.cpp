/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:40 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/03 18:21:02 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "DOG";
}

Dog::Dog(Dog const &dog){
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
