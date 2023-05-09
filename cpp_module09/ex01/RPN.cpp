/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:59 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/09 14:19:50 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

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
        if (str == "+" || str == "-" || str == "*" || str == "/")
            this->tok.push(str[0]);
        else if (str_isdigit(str)){
            long x = strtol(str.c_str(), NULL, 10);
            if (x > 10)
                throw std::runtime_error("Error");
            this->num.push(x);
        }
        else
            throw std::runtime_error("Error");
    }
    if (this->tok.size() != this->num.size()-1)
        throw std::runtime_error("Error");
}

RPN::~RPN(){}
