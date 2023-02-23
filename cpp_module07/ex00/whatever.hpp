/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:36:17 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/23 13:08:59 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T min(T x, T y){
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
T max(T x, T y){
    if (x > y)
        return (x);
    else
        return (y);
}

template <typename T>
void swap(T &x, T &y){
    T tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

#endif