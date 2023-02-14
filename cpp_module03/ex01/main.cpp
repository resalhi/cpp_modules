/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:53:01 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/14 15:20:59 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
    ScavTrap a("muslim");
    ScavTrap b(a);
    ScavTrap c;

    c = b;

    a.attack("lkofar");
    a.takeDamage(10);
    a.beRepaired(20);
    b.attack("monafi9in");
    b.takeDamage(10);
    b.beRepaired(20);
    c.attack("lihod");
    c.takeDamage(10);
    c.beRepaired(20);
    a.guardGate();
    b.guardGate();
    c.guardGate();
}