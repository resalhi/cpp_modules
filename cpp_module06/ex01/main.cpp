/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:14 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 14:20:49 by ressalhi         ###   ########.fr       */
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
    Serializer obj;
    Data data = {100};
    uintptr_t x = obj.serialize(&data);
    Data* ptr = obj.deserialize(x);
    std::cout << ptr << std::endl;
    std::cout << &data << std::endl;
}