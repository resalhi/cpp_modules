/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/21 13:58:36 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    this->N = 0;
    this->it = vec.begin();
}

Span::Span(unsigned int N){
    this->N = N;
    this->it = vec.begin();
}

Span::Span(Span const &span){
    this->operator=(span);
}

Span& Span::operator=(Span const &span){
    this->N = span.N;
    return (*this);
}

void    Span::addNumber(unsigned int n){
    if (this->it == vec.end())
        throw std::out_of_range("elements already stored!");
    vec.push_back(n);
}


Span::~Span(){}
