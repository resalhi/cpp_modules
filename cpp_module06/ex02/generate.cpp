/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:05:54 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 20:08:19 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void    identify(Base* p){
    std::cout << p << std::endl;
}

void    identify(Base& p){
    std::cout << &p << std::endl;
}

Base* generate(void){
    
}
