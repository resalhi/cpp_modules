/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:18:44 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/31 18:28:22 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called\n";
    this->name = "random";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &fragtrap){
    std::cout << "FragTrap Copy constructor called\n";
    this->operator=(fragtrap);
}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap){
    std::cout << "FragTrap Copy assignment operator called\n";
    this->name = fragtrap.name;
    this->hit_points = fragtrap.hit_points;
    this->energy_points = fragtrap.energy_points;
    this->attack_damage = fragtrap.attack_damage;
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parameterized constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

void    FragTrap::highFivesGuys(void){
    std::cout << "positive high fives request\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called\n";
}