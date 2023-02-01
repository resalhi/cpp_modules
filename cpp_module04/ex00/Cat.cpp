/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:46 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 21:55:59 by ressalhi         ###   ########.fr       */
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

void    Cat::makeSound(void){
    std::cout << "Meao Meao\n";
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called\n";
}
