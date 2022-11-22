/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:24:44 by ressalhi          #+#    #+#             */
/*   Updated: 2022/11/22 16:29:02 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

void    contact::ft_printinfo(int i){
    first_name = first_name.substr(0, 10);
    first_name[9] = '.';
    last_name = last_name.substr(0, 10);
    last_name[9] = '.';
    std::cout << i << "         | " << first_name << " | " << last_name << " | " << nickname << std::endl;
}

void    contact::ft_addinfo(){
            std::cout << "first_name: ";
            std::cin >> first_name;
            std::cout << "last_name: ";
            std::cin >> last_name;
            std::cout << "nickname: ";
            std::cin >> nickname;
            std::cout << "phone_number: ";
            std::cin >> phone_number;
            std::cout << "darkest_secret: ";
            std::cin >> darkest_secret;
}

void    phonebook::ft_addc(void){

    if (index > 8)
        index = 0;
    contact[index].ft_addinfo();
    index++;
}

void    phonebook::ft_searchc(void){

    std::cout << "Index     | First Name | Last Name | Nickname \n";
    for (int i = 0; i < index; i++)
    {
        contact[i].ft_printinfo(i);
    }
    std::cout << "Enter an Index :";
    std::string s;
    while (std::getline(std::cin, s))
    {
        if (std::cin.eof())
            break;
        if (s.size() > 2 || !isdigit(s[0]))
        {
            std::cout << "Wrong Index\n";
            std::cout << "Enter an Index :";
            continue;
        }
        else
        {
            int i = stoi(s);
            if (i > index)
            {
                std::cout << "Wrong Index\n";
                std::cout << "Enter an Index :";
                continue;
            }
            contact[i].ft_printinfo(i);
            break ;
        }
    }
    
}


int main()
{
    std::string s;
    phonebook book;
    book.index = 0;
    std::cout << "Enter a command :";
    while (1)
    {
        std::getline(std::cin, s);
        if (std::cin.eof())
            break;
        if (s == "ADD")
            book.ft_addc();
        else if (s == "SEARCH")
            book.ft_searchc();
        else if (s == "EXIT")
        {
            std::cout << "Done\n";
            return (0);
        }
        else
            std::cout << "Phonebook : " << s <<" : Command not found\nValid commands : (ADD, SEARCH or EXIT)\n";
        std::cout << "Enter a command :";
    }
}
