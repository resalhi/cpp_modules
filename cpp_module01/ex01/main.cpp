/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:33:47 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/28 12:00:13 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(999999999, "foo");
    for (int i = 0; i < 3; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
}