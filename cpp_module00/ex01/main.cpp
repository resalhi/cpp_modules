/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:24:44 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/26 19:08:01 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.hpp"
#include "phonebook.hpp"

void    contact::ft_printallinfo(){
    std::cout << "first name : " << first_name << std::endl;
    std::cout << "last name : " << last_name << std::endl;
    std::cout << "nick name : " << nickname << std::endl;
    std::cout << "phone number : " << phone_number << std::endl;
    std::cout << "darkest secret : " << darkest_secret << std::endl;
}

void    contact::ft_printinfo(int i){
    std::cout << "| ";
    std::cout << std::setw(10);
    std::cout << i;
    std::cout << " | ";
    if (first_name.size() > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << std::setw(1);
            std::cout << first_name[i];
        }
        std::cout << '.';
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << first_name;
    }
    std::cout << " | ";
    if (last_name.size() > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << std::setw(1);
            std::cout << last_name[i];
        }
        std::cout << '.';
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << last_name;
    }
    std::cout << " | ";
    if (nickname.size() > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << std::setw(1);
            std::cout << nickname[i];
        }
        std::cout << '.';
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << nickname;
    }
    std::cout << " | \n";
    std::cout << "*---------------------------------------------------*\n";
}

void    contact::ft_addinfo(){
    std::cout << "first_name: ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        return ;
    std::cout << "last_name: ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        return ;
    std::cout << "nickname: ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return ;
    while (1)
    {
        int status=0;
        std::cout << "phone_number: ";
        std::getline(std::cin, phone_number);
        if (std::cin.eof())
            return ;
        int l = phone_number.size();
        for (int i = 0; i < l; i++)
        {
            if (!isdigit(phone_number[i]))
            {
                status=1;
                std::cout << "Wrong phone_number it should contain only integer\n";
                break ;
            }
        }
        if (status)
            continue;
        else
            break;
    }
    std::cout << "darkest_secret: ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        return ;
}

void    phonebook::ft_addc(void){
    if (index == 8){
        full = 1;
        index = 0;
    }
    contact[index].ft_addinfo();
    index++;
}

void    phonebook::ft_searchc(void){
    std::cout << "*-----------* *----------* *----------* *-----------*\n";
    std::cout << "| Index      | First Name | Last Name  | nick name  |\n";
    std::cout << "*---------------------------------------------------*\n";
    for (int i = 0; i < 8; i++)
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
            std::cout << "Wrong Index or Empty field of Contact\n";
            std::cout << "Enter an Index :";
            continue;
        }
        else
        {
            int i = stoi(s);
            if ((i > index-1 && !full) || i > 7)
            {
                std::cout << "Wrong Index or Empty field of Contact\n";
                std::cout << "Enter an Index :";
                continue;
            }
            contact[i].ft_printallinfo();
            break ;
        }
    }
    
}


int main()
{
    std::string s;
    phonebook book;
    book.index = 0;
    book.full = 0;
    std::cout << "Enter a command : ";
    while (1)
    {
        std::getline(std::cin, s);
        if (std::cin.eof())
            break;
        if (s == "ADD"){
            book.ft_addc();
        }
        else if (s == "SEARCH")
        {
            if (book.index != 0)
                book.ft_searchc();
            else
                std::cout << "There's No Contacts!!\nUse Command (ADD) to Add a Contact\n";
        }
        else if (s == "EXIT")
        {
            std::cout << "Done\n";
            return (0);
        }
        else
            std::cout << "Phonebook : " << s <<" : Command not found\nValid commands : (ADD, SEARCH or EXIT)\n";
        if (std::cin.eof())
            break;
        std::cout << "Enter a command : ";
    }
}
