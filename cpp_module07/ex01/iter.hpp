/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:50:16 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/15 20:21:23 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T> void iter(T &a[], int len, T (f*)(unsigned int, T)){
    for (int i=0; i < len; i++){
        a[i] = f(i, a[i]);
    }
}

#endif
