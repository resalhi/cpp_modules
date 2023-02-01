/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:17:08 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/01 14:09:17 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void    Harl::debug(void){
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n";
}

void    Harl::info(void){
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning(void){
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void){
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level){
    typedef void (Harl::*ptr)();
    ptr tab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (str[i] == level){
            while (i < 4)
            {
                (this->*tab[i])();
                std::cout << "\n";
                i++;
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}
