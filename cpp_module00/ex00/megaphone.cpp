/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:44:26 by ressalhi          #+#    #+#             */
/*   Updated: 2022/07/22 16:13:50 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    i = 1;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            av[i][j] = toupper(av[i][j]);
            std::cout << av[i][j];
            j++;
        }
        i++;
    }
    std::cout << "\n";
}