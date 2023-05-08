/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:53:55 by ressalhi          #+#    #+#             */
/*   Updated: 2023/03/14 20:00:31 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try{
        if (ac != 2)
            throw std::runtime_error("Error: could not open file.");
        BitcoinExchange obj;
        obj.openfile(av[1]);
    }
    catch(const std::exception& e){
        std::cout << e.what() << '\n';
    }
}