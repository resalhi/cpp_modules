/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:55:33 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/20 20:58:48 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
    private:
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &span);
        Span& operator=(Span const &span);
        ~Span();
};

#endif
