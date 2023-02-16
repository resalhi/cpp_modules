/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:46 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 14:15:07 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Default Constructor Called\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &cat){
    std::cout << "Cat Copy Constructor Called\n";
    this->brain = NULL;
    this->operator=(cat);
}
Cat& Cat::operator=(Cat const &cat){
    if (!brain){
        this->brain = new Brain();
    }
    this->type = cat.type;
    *(this->brain) = *(cat.brain);
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << "Meao Meao\n";
}

std::string Cat::getType(void) const{
    return (type);
}

void    Cat::setType(std::string type){
    this->type = type;
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called\n";
    delete brain;
}
