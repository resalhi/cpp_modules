/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:05:23 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/23 15:14:41 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac != 4)
        return (0);
    std::string str = av[1];
    std::ifstream file1;
    file1.open(str, std::ios::in);
    if (!file1){
        std::cout << "Open File Error\n";
        return (0);
    }
    std::ofstream file(str + ".replace");
    std::string s,s1,s2;
    s1 = av[2], s2 = av[3];
    int s1len = s1.size();
    int s2len = s2.size();
    while (std::getline(file1, s))
    {
        int n = -2;
        while (n != -1 && av[2][0] != '\0'){
            if (n >= 0)
                n = s.find(s1, n+s2len);
            else if (n == -2)
                n = s.find(s1);
            if (n >= 0){
                s.erase(n, s1len);
                s.insert(n, s2);
            }
        }
        file << s;
        file << "\n";
    }
    file1.close();
}