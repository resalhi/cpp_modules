/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:46:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 13:19:10 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> con;
    con.push_back(10);
    con.push_back(24);
    con.push_back(35);
    con.push_back(47);
    con.push_back(52);
    try{
        std::cout << easyfind(con, 47) << '\n';
    }
    catch(const std::exception& e){
        std::cout << e.what() << '\n';
    }
    try{
        std::cout << easyfind(con, 100) << '\n';
    }
    catch(const std::exception& e){
        std::cout << e.what() << '\n';
    }
}
