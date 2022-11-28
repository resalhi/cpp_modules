/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:10 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/28 11:57:05 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    
    Zombie *zombie;
    
    zombie = new Zombie[N];
    for (int i = 0; i < N; i++){
        zombie[i].set_name(name);
    }
    return (zombie);
}