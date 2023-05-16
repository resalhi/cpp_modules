/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:59 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/16 12:04:53 by ressalhi         ###   ########.fr       */
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

RPN::RPN(char *av){
    std::string str = av;
    for (size_t i=0;i < str.size();i++){
        if (str[i] == ' ')
            continue;
        if (str[i] == '+'){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1+n2);
        }
        else if (str[i] == '-'){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1-n2);
        }
        else if (str[i] == '*'){
            if (this->num.size() < 2)
                throw std::runtime_error("Error");
            long n2 = this->num.top();
            this->num.pop();
            long n1 = this->num.top();
            this->num.pop();
            this->num.push(n1*n2);
        }
        else if (str[i] == '/'){
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
        else if (std::isdigit(str[i])){
            std::string nb="";
            nb+=str[i];
            long x = strtol(nb.c_str(), NULL, 10);
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
