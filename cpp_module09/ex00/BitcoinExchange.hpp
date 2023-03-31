/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:54:18 by ressalhi          #+#    #+#             */
/*   Updated: 2023/03/14 21:01:10 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::string date;
        std::string pipe;
        std::string value;
        std::string err;
        std::map<std::string, float> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();
        void    openfile(std::string str);
        int countstr(std::stringstream *s);
        int parse_date();
        int parse_value();
};

#endif
