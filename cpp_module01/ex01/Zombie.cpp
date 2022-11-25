/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:07 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/25 18:38:53 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name){
    this->name = name;
}
