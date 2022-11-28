/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:02:30 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/28 20:57:58 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon  weapon();
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon club){
            weapon() = club;
        }
        void    attack(){
            std::cout << name << " attacks with their " << weapon().getType();
        }
};

#endif