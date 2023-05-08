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
        this->data.insert(std::make_pair(s1, s2));
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

bool febr(int year){ return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)); }

bool BitcoinExchange::parse_date(){
    std::string str(this->date);
    std::istringstream s(str);
    int y, m, d;
    char sep;

    if (s >> y >> sep && sep == '-' && s >> m >> sep && sep == '-' && s >> d){
        if ((y < 2009 || y > 2022) || (m < 1 || m > 12) || (d < 1 || d > 31))
            return false;
        if (m == 2){
            if (febr(y))
                return (d <= 29);
            else
                return (d <= 28);
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
            return (d <= 30);
        return true;
    }
    return false;
}

bool isDouble(const std::string& str) {
    char* endptr;
    strtod(str.c_str(), &endptr);
    return endptr != str.c_str() && *endptr == '\0';
}

bool BitcoinExchange::parse_value(){
    this->err = "Error: bad input => " + this->date+this->pipe+this->value+"\n";
    if (this->pipe != "|")
        return false;
    if (!isDouble(this->value)){
        this->err = "Error: not a number.\n";
        return false;
    }
    this->val = strtod(this->value.c_str(), NULL);
    if (val < 0){
        this->err = "Error: not a positive number.\n";
        return false;
    }
    if (val > 2147483647){
        this->err = "Error: too large a number.\n";
        return false;
    }
    return true;
}

void    BitcoinExchange::get_closest_date(){
    std::string ss;
    double v;
    int y, m, d;
    char sep;

    ss = this->data[this->date];
    std::istringstream s(this->date);
    s >> y >> sep >> m >> sep >> d;
    while (ss.empty()){
        // std::cout << "heeeeeeere ------> "<< y << " - " << m << " - " << d << "\n";
        d--;
        if (d == 0){
            m--;
            if (m == 0){
                y--;
                m = 12;d = 31;
            }
            else{
                if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
                    d = 30;
                else
                    d = 31;
            }
        }
        std::string str = std::to_string(y) + '-' + std::to_string(m) + '-' + std::to_string(d);
        ss = this->data[str];
    }
    v = strtod(ss.c_str(), NULL);
    if (!ss.empty())
        std::cout << this->date << " => " << this->value << " = " << strtod(this->value.c_str(), NULL)*v << '\n';
}

void    BitcoinExchange::get_value(){
    std::string str;
    double v;

    str = this->data[this->date];
    if (str.empty()){
        get_closest_date();
    }
    else{
        v = strtod(str.c_str(), NULL);
        std::cout << this->date << " => " << this->value << " = " << strtod(this->value.c_str(), NULL)*v << '\n';
    }
}

void    BitcoinExchange::openfile(std::string str){
    std::ifstream file;
    file.open(str, std::ios::in);
    if (!file)
        throw std::runtime_error("Open File Error\n");
    std::string s;
    while (std::getline(file, s)){
        std::stringstream ss(s);
        if (countstr(&ss) != 3){
            std::cout << "Error: bad input => " << this->date << '\n';
            continue;
        }
        if (!parse_date()){
            std::cout << "Error: bad input => " << this->date << '\n';
            continue;
        }
        if (!parse_value()){
            std::cout << this->err;
            continue;
        }
        get_value();
    }
}

BitcoinExchange::~BitcoinExchange(){}
