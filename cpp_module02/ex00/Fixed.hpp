/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:12:58 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/24 20:58:36 by ressalhi         ###   ########.fr       */
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
        ~Fixed();
};

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed = 0;
}

Fixed::Fixed(Fixed const &Fixed)
{
    std::cout << "Copy constructor called\n";
    this->fixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}


#endif