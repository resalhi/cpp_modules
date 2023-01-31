/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:52:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/31 17:01:37 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called\n";
    this->name = "random";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called\n";
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap){
    std::cout << "ClapTrap Copy constructor called\n";
    this->operator=(claptrap);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap){
    std::cout << "ClapTrap Copy assignment operator called\n";
    this->name = claptrap.name;
    this->hit_points = claptrap.hit_points;
    this->energy_points = claptrap.energy_points;
    this->attack_damage = claptrap.attack_damage;
    return (*this);
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
