/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 19:55:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat obj("l9ayed", 250);
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat obj("chikh", 1);
        obj.increment_grade();
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat obj("chikh", 150);
        obj.decrement_grade();
        std::cout << obj << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}