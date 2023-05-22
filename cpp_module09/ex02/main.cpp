/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/22 21:13:26 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
std::string    merge_insirtion_sort(T tab){
    int struggler = -1;
    if (tab.size()%2 != 0){
        struggler = tab.back();
        tab.pop_back();
    }
    typename T::iterator it = tab.begin();
    T small_tab;
    T large_tab;
    while (it != tab.end()){
        long n1 = *it++;
        long n2 = *it++;
        if (n1 > n2){
            small_tab.push_back(n2);
            large_tab.push_back(n1);
        }
        else{
            small_tab.push_back(n1);
            large_tab.push_back(n2);
        }
    }
    std::sort(large_tab.begin(), large_tab.end());
    it = small_tab.begin();
    while (it != small_tab.end()){
        large_tab.insert(std::lower_bound(large_tab.begin(), large_tab.end(), (*it)), (*it));
        it++;
    }
    if (struggler != -1)
        large_tab.insert(std::lower_bound(large_tab.begin(), large_tab.end(), struggler), struggler);
    it = large_tab.begin();
    int i =0;
    std::string s;
    while (it != large_tab.end() && i < 6){
        s += std::to_string(*it);
        s += " ";
        it++;
        i++;
    }
    if (it != large_tab.end())
        s += "[...]";
    return s;
}

int main(int ac, char **av){
    try {
        if (ac < 2)
            throw std::runtime_error("Error");
        PmergeMe obj(ac, av);
        std::cout << "Before: ";
        std::vector<long> vec = obj.get_vec();
        for (size_t i = 0; i < 6 && i < vec.size(); i++)
            std::cout << vec[i] << " ";
        if (vec.size() > 6)
            std::cout << "[...]";
        std::cout << '\n';
        std::string str;
        std::deque<long> d = obj.get_deque();
        clock_t start_v = clock();
        str = merge_insirtion_sort(vec);
        clock_t end_v = clock();
        clock_t start_d = clock();
        str = merge_insirtion_sort(d);
        clock_t end_d = clock();
        double duration_d = (end_d - start_d) * 1000000.0 / CLOCKS_PER_SEC;
        double duration_v = (end_v - start_v) * 1000000.0 / CLOCKS_PER_SEC;
        std::cout << "After : " << str << '\n';
        std::cout << "Time to process a range of " << ac-1 << " elements with std::vector : " << std::fixed << std::setprecision(5) << duration_v << " us" << std::endl;
        std::cout << "Time to process a range of " << ac-1 << " elements with std::deque : " << std::setprecision(5) << duration_d << " us" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
