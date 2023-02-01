/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:40 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 21:56:16 by ressalhi         ###   ########.fr       */
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

void    Dog::makeSound(void){
    std::cout << "Bark Bark\n";
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called\n";
}
