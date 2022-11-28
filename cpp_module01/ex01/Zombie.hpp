/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:34:12 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/27 22:46:04 by ressalhi         ###   ########.fr       */
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
        void    set_name(std::string name);
        ~Zombie(){
            std::cout << name << std::endl;
        }
};

Zombie* zombieHorde(int N, std::string name);

#endif