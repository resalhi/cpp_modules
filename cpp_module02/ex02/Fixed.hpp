/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:12:58 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/08 17:00:45 by ressalhi         ###   ########.fr       */
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
        Fixed& operator+(Fixed const &Fixed);
        Fixed& operator-(Fixed const &Fixed);
        Fixed& operator*(Fixed const &Fixed);
        Fixed& operator/(Fixed const &Fixed);
        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);
        float   toFloat(void) const;
        int     toInt(void) const;
        static const Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        bool    operator>(const Fixed& Fixed) const;
        bool    operator<(const Fixed& Fixed) const;
        bool    operator>=(const Fixed& Fixed) const;
        bool    operator<=(const Fixed& Fixed) const;
        bool    operator==(const Fixed& Fixed) const;
        bool    operator!=(const Fixed& Fixed) const;
        int     getRawbits(void) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif