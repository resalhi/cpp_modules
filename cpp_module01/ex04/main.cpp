/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:05:23 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/30 22:43:34 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    std::string str = av[1];
    std::ifstream file1;
    file1.open(str, std::ios::in);
    std::ofstream file(str + ".replace");
    std::string s,s1,s2;
    s1 = av[2], s2 = av[3];
    while (std::getline(file1, s))
    {
        s.replace(0, 5, s1);
        file << s;
        file << "\n";
    }
    file1.close();
}