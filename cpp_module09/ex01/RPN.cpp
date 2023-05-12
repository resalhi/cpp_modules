/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:59 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/11 18:42:40 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &obj){
    this->operator=(obj);
}

RPN& RPN::operator=(const RPN &obj){
    this->num = obj.num;
    return *this;
}

bool    str_isdigit(std::string str){
    for (size_t i=0;i<str.size();i++){
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

RPN::RPN(char *av){
    std::string str;
    std::stringstream s(av);
    while (s >> str){
        if (str == "+"){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1+n2);
        }
        else if (str == "-"){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1-n2);
        }
        else if (str == "*"){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1*n2);
        }
        else if (str == "/"){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            if (!n2)
                throw std::runtime_error("Error");
            this->num.push(n1/n2);
        }
        else if (str_isdigit(str)){
            long x = strtol(str.c_str(), NULL, 10);
            if (x >= 10){
                for (size_t i=0;i < str.size();i++){
                    std::string c;
                    c += str[i];
                    long n = strtol(c.c_str(), NULL, 10);
                    this->num.push(n);
                }
            }
            else
                this->num.push(x);
        }
        else
            throw std::runtime_error("Error");
    }
    if (this->num.size() != 1)
        throw std::runtime_error("Error");
    std::cout << this->num.top() << '\n';
}

RPN::~RPN(){}
