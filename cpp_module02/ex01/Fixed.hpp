/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:12:58 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/29 12:23:58 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed;
        static const int fixedbit = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        Fixed(Fixed const &Fixed);
        Fixed& operator=(Fixed const &Fixed);
        float   toFloat(void) const;
        int     toInt(void) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif