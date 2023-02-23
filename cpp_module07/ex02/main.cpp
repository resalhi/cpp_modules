/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:46:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/23 13:53:10 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try {
        Array<int> a(6);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;
        a[5] = 6;
        for (unsigned int i = 0; i < a.size(); i++){
            std::cout << a[i] << " ";
        }
    }
    catch(std::out_of_range &e){
        std::cout << e.what();
    }
    std::cout << "\n";
}
