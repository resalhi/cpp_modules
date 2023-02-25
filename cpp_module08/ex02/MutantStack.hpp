/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:47:20 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 14:45:16 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack& operator=(MutantStack const &mutant){ this->c = mutant.c;return (*this); }
        MutantStack(MutantStack const &mutant){ this->operator=(mutant); }
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void) {
            return (this->c.begin());
        }
        iterator end(void) {
            return (this->c.end());
        }
};

#endif
