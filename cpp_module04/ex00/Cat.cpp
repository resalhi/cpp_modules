/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:46 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 13:00:15 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Default Constructor Called\n";
    this->type = "Cat";
}

Cat::Cat(Cat const &cat){
    std::cout << "Cat Copy Constructor Called\n";
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

WrongCat::WrongCat(){
    std::cout << "WrongCat Default Constructor Called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &Wrongcat){
    std::cout << "WrongCat Copy Constructor Called\n";
    this->operator=(Wrongcat);
}

WrongCat& WrongCat::operator=(WrongCat const &Wrongcat){
    this->type = Wrongcat.type;
    return (*this);
}

void    WrongCat::makeSound(void) const{
    std::cout << "Meao Meao\n";
}

std::string WrongCat::getType(void) const{
    return (type);
}

void    WrongCat::setType(std::string type){
    this->type = type;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called\n";
}
