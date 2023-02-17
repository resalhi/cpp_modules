/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:50:16 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/16 19:44:36 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *a, int len, F f){
    for (int i=0; i < len; i++){
        f(a[i]);
    }
}

template <typename F>
void    print(F i){
    std::cout << i << " ";
}

#endif
