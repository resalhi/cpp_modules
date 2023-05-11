/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:17:37 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/11 17:00:55 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <deque>

class PmergeMe
{
    private:
        std::vector<long> vec;
        std::deque<long> deque;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe& operator=(const PmergeMe &obj);
        ~PmergeMe();
        PmergeMe(int ac, char **av);
        std::vector<long> get_vec();
        std::deque<long> get_deque();
};

#endif
