/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/10 14:26:07 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    try {
        if (ac < 2)
            return 0;
        PmergeMe obj(ac, av);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
