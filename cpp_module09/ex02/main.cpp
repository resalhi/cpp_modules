/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:12:24 by ressalhi          #+#    #+#             */
/*   Updated: 2023/05/11 00:28:17 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    merge_insirtion_sort(std::vector<long> vec){
    std::vector<std::pair<long, long> > vec_pair;
    int struggler = -1;
    if (vec.size()%2 != 0){
        struggler = vec.back();
        vec.pop_back();
    }
    std::vector<long>::iterator it = vec.begin();
    while (it != vec.end()){
        long n1 = *it++;
        long n2 = *it++;
        if (n1 > n2)
            vec_pair.push_back(std::make_pair(n2, n1));
        else
            vec_pair.push_back(std::make_pair(n1, n2));
    }
    std::vector<long> small_vec;
    std::vector<long> large_vec;
    std::vector<std::pair<long, long> >::iterator itp = vec_pair.begin();
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
    while (it != large_vec.end() && i < 6){
        std::cout << *it << " ";
        it++;
        i++;
    }
    if (it != large_vec.end())
        std::cout << "[...]";
    std::cout <<'\n';
}

int main(int ac, char **av){
    try {
        if (ac < 2)
            return 0;
        PmergeMe obj(ac, av);
        clock_t start = clock();
        merge_insirtion_sort(obj.get_vec());
        clock_t end = clock();
        double duration_ms = (end - start) * 1000000.0 / CLOCKS_PER_SEC;
        std::cout << "Execution time: " << duration_ms << " us" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}
