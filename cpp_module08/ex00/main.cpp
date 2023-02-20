/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:46:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/20 20:41:59 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> con;
    con.push_back(1);
    con.push_back(2);
    con.push_back(3);
    con.push_back(4);
    con.push_back(5);
    try{
        std::vector<int>::iterator it = easyfind(con, 9);
        std::cout << std::distance(con.begin(), it) << '\n';
    }
    catch(const std::exception& e){
        std::cout << e.what() << '\n';
    }
}