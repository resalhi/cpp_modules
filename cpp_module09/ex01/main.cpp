/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/11 17:44:29 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    try {
        if (ac != 2)
            throw std::runtime_error("Error");
        RPN obj(av[1]);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}