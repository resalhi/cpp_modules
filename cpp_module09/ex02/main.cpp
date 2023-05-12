/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/12 20:47:02 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T, typename P>
std::string    merge_insirtion_sort(T tab, P tab_pair){
    int struggler = -1;
    if (tab.size()%2 != 0){
        struggler = tab.back();
        tab.pop_back();
    }
    typename T::iterator it = tab.begin();
    while (it != tab.end()){
        long n1 = *it++;
        long n2 = *it++;
        if (n1 > n2)
            tab_pair.push_back(std::make_pair(n2, n1));
        else
            tab_pair.push_back(std::make_pair(n1, n2));
    }
    T small_tab;
    T large_tab;
    typename P::iterator itp = tab_pair.begin();
    while (itp != tab_pair.end()){
        small_tab.push_back((*itp).first);
        large_tab.push_back((*itp).second);
        itp++;
    }
    std::sort(large_tab.begin(), large_tab.end());
    while (!small_tab.empty()){
        it = small_tab.begin();
        large_tab.insert(std::lower_bound(large_tab.begin(), large_tab.end(), (*it)), (*it));
        small_tab.erase(it);
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
        clock_t start_d = clock();
        std::vector<std::pair<long, long> > pair_v;
        str = merge_insirtion_sort(obj.get_vec(), pair_v);
        clock_t end_d = clock();
        clock_t start_v = clock();
        std::deque<std::pair<long, long> > pair_d;
        str = merge_insirtion_sort(obj.get_deque(), pair_d);
        clock_t end_v = clock();
        double duration_d = (end_d - start_d) * 1000000.0 / CLOCKS_PER_SEC;
        double duration_v = (end_v - start_v) * 1000000.0 / CLOCKS_PER_SEC;
        std::cout << "After : " << str << '\n';
        std::cout << "Time to process a range of " << ac-1 << " elements with std::deque : " << std::fixed << std::setprecision(5) << duration_d << " us" << std::endl;
        std::cout << "Time to process a range of " << ac-1 << " elements with std::vector : " << std::setprecision(5) << duration_v << " us" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
