/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:17:34 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/12 20:38:59 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &obj){
    this->operator=(obj);
}

PmergeMe& PmergeMe::operator=(const PmergeMe &obj){
    this->vec = obj.vec;
    this->deque = obj.deque;
    return *this;
}

bool    str_isdigit(std::string str){
    if (str[0] == '+' && str.size() > 1)
        str.erase(0, 1);
    for (size_t i=0;i<str.size();i++){
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

PmergeMe::PmergeMe(int ac, char **av){
    for (int i = 1; i < ac; i++){
        if (!str_isdigit(av[i]))
            throw std::runtime_error("Error");
        double n = strtod(av[i], NULL);
        if (n > 2147483647)
            throw std::runtime_error("Error");
        this->vec.push_back(n);
        this->deque.push_back(n);
    }
}

std::vector<long> PmergeMe::get_vec(){ return this->vec; }

std::deque<long> PmergeMe::get_deque(){ return this->deque; }

PmergeMe::~PmergeMe(){}
