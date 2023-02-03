/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:43 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/03 18:27:35 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        void    makeSound(void) const;
        std::string getType(void) const;
        void    setType(std::string type);
        ~Cat();
};

#endif
