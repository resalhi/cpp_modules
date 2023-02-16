/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 14:18:43 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
// }

int main()
{
    Animal *meta[4];

    for (int i = 0; i < 2; i++){
        meta[i] = new Dog();
    }
    for (int i = 2; i < 4; i++){
        meta[i] = new Cat();
    }
    for (int i = 0; i < 4; i++){
        delete meta[i];
    }
    return 0;
}
