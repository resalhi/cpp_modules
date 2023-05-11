/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/11 18:18:35 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

template <typename T, typename P>
std::string    merge_insirtion_sort(T vec, P vec_pair){
    int struggler = -1;
    if (vec.size()%2 != 0){
        struggler = vec.back();
        vec.pop_back();
    }
    typename T::iterator it = vec.begin();
    while (it != vec.end()){
        long n1 = *it++;
        long n2 = *it++;
        if (n1 > n2)
            vec_pair.push_back(std::make_pair(n2, n1));
        else
            vec_pair.push_back(std::make_pair(n1, n2));
    }
    T small_vec;
    T large_vec;
    typename P::iterator itp = vec_pair.begin();
    while (itp != vec_pair.end()){
        small_vec.push_back((*itp).first);
        large_vec.push_back((*itp).second);
        itp++;
    }
    std::sort(large_vec.begin(), large_vec.end());
    while (!small_vec.empty()){
        it = small_vec.begin();
        large_vec.insert(std::lower_bound(large_vec.begin(), large_vec.end(), (*it)), (*it));
        small_vec.erase(it);
    }
    if (struggler != -1)
        large_vec.insert(std::lower_bound(large_vec.begin(), large_vec.end(), struggler), struggler);
    it = large_vec.begin();
    int i =0;
    std::string s;
    while (it != large_vec.end() && i < 6){
        s += std::to_string(*it);
        s += " ";
        it++;
        i++;
    }
    if (it != large_vec.end())
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
        for (size_t i = 0; i < 6 && i < vec.size(); i++){
            std::cout << vec[i] << " ";
        }
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
        std::cout << "Time to process a range of " << vec.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << duration_d << " us" << std::endl;
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::setprecision(5) << duration_v << " us" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
