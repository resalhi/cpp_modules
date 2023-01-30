/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:52:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/30 18:42:17 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called\n";
    this->name = "random";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called\n";
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
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

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called\n";
}
