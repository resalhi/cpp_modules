/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:02:38 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 13:36:56 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
    setType(name);
}

void    Weapon::setType(std::string name){
    type = name;
}
const std::string& Weapon::getType(){
    return (type);
}
