/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:10 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 13:29:46 by ressalhi         ###   ########.fr       */
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