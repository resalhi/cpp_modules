/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:14 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/21 18:09:17 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        virtual ~Base(){}
};

class A: public Base{};

class B: public Base{};

class C: public Base{};

void    identify(Base* p){
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C\n";
}

void    identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A\n";
        (void)a;
    }
    catch (std::bad_cast){}
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B\n";
        (void)b;
    }
    catch (std::bad_cast){}
    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C\n";
        (void)c;
    }
    catch (std::bad_cast){}
}

Base* generate(void){
    srand((unsigned) time(NULL));
    int rdm = 1 + (rand() % 3);
    switch(rdm){
        case 1:
            return new A;
        case 2:
            return new B;
        case 3:
            return new C;
    }
    return (NULL);
}

int main()
{
    Base *ptr = generate();
    identify(*ptr);
    identify(ptr);
    delete ptr;
}
