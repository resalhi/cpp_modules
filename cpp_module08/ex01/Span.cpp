/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/22 18:41:05 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    this->N = 0;
    this->vec.resize(0);
}

Span::Span(unsigned int N){
    this->N = N;
    this->vec.reserve(N);
}

Span::Span(Span const &span){
    this->operator=(span);
}

Span& Span::operator=(Span const &span){
    this->N = span.N;
    return (*this);
}

void    Span::addNumber(unsigned int n){
    try{
        if (this->vec.size() == this->N)
            throw std::out_of_range("Span is full!");
        vec.push_back(n);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

unsigned int Span::shortestSpan(){
    unsigned int n;
    try{
        if (this->vec.size() <= 1)
            throw std::out_of_range("Not Enough Span!");
        std::vector<int> tmp = this->vec;
        std::sort(tmp.begin(), tmp.end());
        n = tmp[1] - tmp[0];
        for (size_t i = 0; i < tmp.size(); i++){
            unsigned int x = tmp[i+1] - tmp[i];
            if (x < n)
                n = x;
        }
        return (n);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return (0);
}

unsigned int Span::longestSpan(){
    unsigned int n;
    try {
        if (this->vec.size() <= 1)
            throw std::out_of_range("Not Enough Span!");
        std::vector<int> tmp = this->vec;
        std::sort(tmp.begin(), tmp.end());
        n = tmp[tmp.size()-1] - tmp[0];
        return (n);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}

Span::~Span(){}
