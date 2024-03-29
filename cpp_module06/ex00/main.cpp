/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:14 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/21 17:49:32 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
    public:
        static void convert(std::string arg);
};

void    ScalarConverter::convert(std::string arg){
    char c;
    int i;
    float f;
    double d;
    float num;
    num = std::stof(arg);
    c = static_cast<char>(num);
    i = static_cast<int>(num);
    f = static_cast<float>(num);
    d = static_cast<double>(num);

    if (i >= 32 && i <= 126)
        std::cout << "char: '" << c << "'" << std::endl;
    else if (std::isnan(num) || std::isinf(num))
        std::cout << "char: impossible\n";
    else
        std::cout << "char: Non displayable\n";
    if (std::isnan(num) || std::isinf(num))
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << i << std::endl;
    std::cout << std::setprecision(1);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 2 || av[1][0] == '\0')
        return (0);
    try{
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}