/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/06 18:02:13 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat obj("rida", 250);
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << '\n';
    }
    Bureaucrat obj("rida", 1);
    try {
        obj.increment_grade();
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << '\n';
    }
    try {
        Bureaucrat obj("rida", 1);
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << '\n';
    }
    try {
        Bureaucrat obj("rida", 150);
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << '\n';
    }
    try {
        Bureaucrat obj("rida", -5);
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << '\n';
    }
}