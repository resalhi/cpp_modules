/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:55:27 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 13:16:20 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
std::string easyfind(T &a, int n){
    typename T::iterator it = std::find(a.begin(), a.end(), n);
    if (it == a.end())
        throw std::out_of_range("Number not found!");
    return "Number found";
}

#endif
