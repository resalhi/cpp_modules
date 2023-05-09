/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:13:02 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/09 14:09:47 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
    private:
        std::stack<long> num;
        std::stack<char> tok;
    public:
        RPN();
        RPN(char *av);
        ~RPN();
};


#endif
