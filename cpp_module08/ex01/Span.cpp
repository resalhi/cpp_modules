/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:35 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/20 21:01:25 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    this->N = 0;
}

Span::Span(unsigned int N){
    this->N = N;
}

Span::Span(Span const &span){
    this->operator=(span);
}

Span& Span::operator=(Span const &span){
    this->N = span.N;
    return (*this);
}

Span::~Span(){}
