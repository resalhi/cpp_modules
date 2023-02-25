/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:33 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 13:42:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &span);
        Span& operator=(Span const &span);
        void    addNumber(unsigned int n);
        void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        ~Span();
};

#endif
