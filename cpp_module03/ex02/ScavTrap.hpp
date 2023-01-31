/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:23 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/31 17:08:25 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const &scavtrap);
        ScavTrap& operator=(ScavTrap const &scavtrap);
        ScavTrap(std::string name);
        ~ScavTrap();
        void    guardGate(void);
};

#endif