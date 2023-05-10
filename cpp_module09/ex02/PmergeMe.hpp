/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:17:37 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/10 23:12:15 by ressalhi         ###   ########.fr       */
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
#include <ctime>

class PmergeMe
{
    private:
        int len;
        std::vector<long> vec;
        std::list<long> list;
    public:
        PmergeMe();
        std::vector<long> get_vec();
        std::list<long> get_list();
        PmergeMe(int ac, char **av);
        ~PmergeMe();
};

#endif
