/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:47:31 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/25 14:37:43 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *a;
        unsigned int len;
    public:
        Array(){
            a = new T[0];
            len = 0;
        }
        Array(unsigned int n){
            a = new T[n];
            len = n;
            for (unsigned int i = 0; i < len; i++){
                a[i] = T();
            }
        }
        Array(Array const &array){
            a = new T[array.len];
            len = array.len;
            for (unsigned int i = 0; i < len; i++){
                a[i] = array.a[i];
            }
        }
        Array &operator=(Array const &array){
            if (this != &array){
                T *tmp = new T[array.len];
                for (unsigned int i = 0; i < array.len; i++){
                    tmp[i] = array.a[i];
                }
                delete [] a;
                a = tmp;
                len = array.len;
            }
            return (*this);
        }
        ~Array(){
            delete [] a;
        }
        T &operator[](unsigned int i) {
            if (i >= len)
                throw (std::out_of_range("exeption: out_of_range"));
            return (a[i]);
        }
        const T &operator[](unsigned int i) const {
            if (i >= len)
                throw (std::out_of_range("exeption: out_of_range"));
            return (a[i]);
        }
        unsigned int size() const{
            return (len);
        }
};

#endif
