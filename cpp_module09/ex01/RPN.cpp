/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:59 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/09 21:53:35 by ressalhi         ###   ########.fr       */
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
    std::stack<long> tmp_num;
    std::stack<char> tmp_tok;
    std::stringstream s(av);
    while (s >> str){
        if (str == "+" || str == "-" || str == "*" || str == "/")
            tmp_tok.push(str[0]);
        else if (str_isdigit(str)){
            long x = strtol(str.c_str(), NULL, 10);
            if (x > 10)
                throw std::runtime_error("Error");
            tmp_num.push(x);
        }
        else
            throw std::runtime_error("Error");
    }
    if (tmp_tok.size() != tmp_num.size()-1)
        throw std::runtime_error("Error");
    while (!tmp_num.empty()){
        this->num.push(tmp_num.top());
        tmp_num.pop();
    }
    while (!tmp_tok.empty()){
        this->tok.push(tmp_tok.top());
        tmp_tok.pop();
    }
    long sum;
    sum = this->num.top();
    this->num.pop();
    while (!this->num.empty()){
        char t = this->tok.top();
        long n = this->num.top();
        this->tok.pop();
        this->num.pop();
        if (t == '+')
            sum = sum + n;
        else if (t == '*')
            sum = sum * n;
        else if (t == '-')
            sum = sum - n;
        else if (t == '/'){
            if (!n)
                throw std::runtime_error("Error");
            sum = sum / n;
        }
    }
    std::cout << sum << '\n';
}

RPN::~RPN(){}
