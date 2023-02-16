/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:40 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 14:15:38 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "DOG Default constructor Called\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &dog){
    std::cout << "Dog Copy Constructor Called\n";
    this->brain = NULL;
    this->operator=(dog);
}

Dog& Dog::operator=(Dog const &dog){
    if (!brain){
        this->brain = new Brain();
    }
    this->type = dog.type;
    *(this->brain) = *(dog.brain);
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
    delete brain;
}
