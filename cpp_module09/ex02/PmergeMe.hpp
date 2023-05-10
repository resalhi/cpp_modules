/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:17:37 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/10 14:25:18 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <sstream>

class PmergeMe
{
    private:
        std::vector<long> vec;
        std::list<long> list;
    public:
        PmergeMe();
        PmergeMe(int ac, char **av);
        ~PmergeMe();
};

#endif
