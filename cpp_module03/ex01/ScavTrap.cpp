/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:27 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/09 15:45:35 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called\n";
    this->name = "random";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap){
    std::cout << "ScavTrap Copy constructor called\n";
    this->operator=(scavtrap);
}

ScavTrap& ScavTrap::operator=(ScavTrap const &scavtrap){
    std::cout << "ScavTrap Copy assignment operator called\n";
    this->name = scavtrap.name;
    this->hit_points = scavtrap.hit_points;
    this->energy_points = scavtrap.energy_points;
    this->attack_damage = scavtrap.attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parameterized constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called\n";
}

void    ScavTrap::guardGate(void){
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}
