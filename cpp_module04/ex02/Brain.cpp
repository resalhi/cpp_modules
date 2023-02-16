/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:13:00 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 14:12:03 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor Called\n";
}

Brain::Brain(Brain const &brain){
    std::cout << "Brain Copy Constructor Called\n";
    this->operator=(brain);
}

Brain& Brain::operator=(Brain const &brain){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = brain.ideas[i];
    }
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called\n";
}