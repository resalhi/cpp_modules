/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:37 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/03 18:20:41 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const &dog);
        Dog& operator=(Dog const &dog);
        void    makeSound(void) const;
        std::string getType(void) const;
        void    setType(std::string type);
        ~Dog();
};

#endif