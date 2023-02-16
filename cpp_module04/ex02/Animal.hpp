/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:49 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 15:36:30 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &animal);
        Animal& operator=(Animal const &animal);
        virtual void    makeSound(void) const = 0;
        std::string getType(void) const;
        void    setType(std::string type);
        virtual ~Animal();
};

#endif