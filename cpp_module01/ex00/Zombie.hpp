/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:53:33 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/25 18:28:51 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie(std::string name);
        ~Zombie(){
            std::cout << name << std::endl;
        }
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif