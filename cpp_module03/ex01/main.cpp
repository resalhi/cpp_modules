/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:53:01 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/30 18:40:55 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    ScavTrap player1("zed");

    player1.attack("player2");
    player1.takeDamage(50);
    player1.beRepaired(40);
}