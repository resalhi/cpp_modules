/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:52:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/30 16:34:40 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    this->name = "random";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "parameterized constructor called\n";
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

void ClapTrap::attack(const std::string& target){
    if (energy_points <= 0 && hit_points <= 0)
        return ;
    energy_points--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    int sum;
    if (amount > hit_points)
        sum = hit_points;
    else
        sum = amount;
    hit_points -= sum;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energy_points <= 0 && hit_points <= 0)
        return ;
    hit_points += amount;
    energy_points--;
    std::cout << "ClapTrap " << name << " is repaired and gains " << amount << " health points\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}
