/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:54:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/03/14 21:09:38 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::ifstream file;
    file.open("data.csv", std::ios::in);
    if (!file)
        throw std::runtime_error("Open File Error\n");
    std::string s1;
    std::string s2;
    std::getline(file, s1);
    while (std::getline(file, s1, ',')){
        std::getline(file, s2);
        float n = std::stof(s2);
        this->data.insert(std::make_pair(s1, n));
    }
    file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
    this->operator=(obj);
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj){
    this->data = obj.data;
    return *this;
}

int    BitcoinExchange::countstr(std::stringstream *s){
    std::string str;
    int n=0;
    while (*s >> str){
        if (n == 0)
            this->date = str;
        else if (n == 1)
            this->pipe = str;
        else if (n == 2)
            this->value = str;
        n++;
    }
    return (n);
}

int BitcoinExchange::parse_date(){
    std::string str;
}

int BitcoinExchange::parse_value(){
    
}

void    BitcoinExchange::openfile(std::string str){
    std::ifstream file;
    file.open(str, std::ios::in);
    if (!file)
        throw std::runtime_error("Open File Error\n");
    std::string s;
    std::getline(file, s);
    while (std::getline(file, s)){
        std::stringstream ss(s);
        if (countstr(&ss) != 3){
            std::cout << "Error: bad input => " << this->date+this->pipe+this->value;
            continue;
        }
        if (!parse_date()){
            std::cout << "Error: bad input => " << this->date;
            continue;
        }
        if (!parse_value()){
            std::cout << this->err;
            continue;
        }
    }
}

BitcoinExchange::~BitcoinExchange(){}
