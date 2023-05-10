/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:17:34 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/10 18:47:43 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

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
        long n = strtol(av[i], NULL, 10);
        this->vec.push_back(n);
        this->list.push_back(n);
    }
    this->len = ac - 1;
}

std::vector<long> PmergeMe::get_vec(){ return this->vec; }

std::list<long> PmergeMe::get_list(){ return this->list; }

PmergeMe::~PmergeMe(){}
