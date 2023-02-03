/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:46 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/03 18:27:33 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "CAT";
}

Cat::Cat(Cat const &cat){
    this->operator=(cat);
}
Cat& Cat::operator=(Cat const &cat){
    this->type = cat.type;
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
}
