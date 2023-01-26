/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:12:58 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/25 13:25:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed;
        static const int fixedbit;
    public:
        Fixed();
        Fixed(Fixed const &Fixed);
        Fixed& operator=(Fixed const &Fixed);
        ~Fixed();
        int getRawBits(void);
        void setRawBits( int const raw );
};


#endif