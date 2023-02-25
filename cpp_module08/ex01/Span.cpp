/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 14:23:59 by ressalhi         ###   ########.fr       */
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
    this->vec = span.vec;
    return (*this);
}

void    Span::addNumber(unsigned int n){
    if (this->vec.size() == this->N)
        throw std::out_of_range("Span is full!");
    vec.push_back(n);
}

unsigned int Span::shortestSpan(){
    unsigned int n;
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

unsigned int Span::longestSpan(){
    unsigned int n;
    if (this->vec.size() <= 1)
        throw std::out_of_range("Not Enough Span!");
    std::vector<int> tmp = this->vec;
    std::sort(tmp.begin(), tmp.end());
    n = tmp[tmp.size()-1] - tmp[0];
    return (n);
}

void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if (std::distance(begin, end) > this->N)
        throw std::out_of_range("Span out of range!");
    this->vec.insert(this->vec.begin(), begin, end);
}

Span::~Span(){}
