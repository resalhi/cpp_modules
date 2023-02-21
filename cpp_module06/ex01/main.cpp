/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:14 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/21 15:39:25 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data{
    int a;
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr){
            return (reinterpret_cast<uintptr_t>(ptr));
        }
        static Data* deserialize(uintptr_t raw){
            return (reinterpret_cast<Data*>(raw));
        }
};

int main()
{
    Data data = {100};
    uintptr_t x = Serializer::serialize(&data);
    Data* ptr = Serializer::deserialize(x);
    std::cout << ptr << std::endl;
    std::cout << &data << std::endl;
    std::cout << ptr->a << std::endl;
}