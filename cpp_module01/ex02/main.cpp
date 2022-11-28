/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:01:12 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/28 13:03:02 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;
    std::cout << &str << std::endl;
    std::cout << p << std::endl;
    std::cout << &r << std::endl;
    std::cout << str << std::endl;
    std::cout << *p << std::endl;
    std::cout << r << std::endl;
}