/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:07 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 13:28:40 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::set_name(std::string name){
   this->name = name;
}

Zombie::~Zombie(){
    std::cout << name << ": Desrucor Called\n";
}
