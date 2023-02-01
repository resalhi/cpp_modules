/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:33:47 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 13:32:07 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(5, "Foo");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
}