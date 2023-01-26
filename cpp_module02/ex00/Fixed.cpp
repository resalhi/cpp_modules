/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:13:00 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/25 14:43:25 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void Fixed::setRawBits( int const raw ){
    this->fixed = raw;
}

int Fixed::getRawBits( void ){
    std::cout << "getRawBits member function called\n";
    return (fixed);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed = 0;
}

Fixed::Fixed(Fixed const &Fixed)
{
    std::cout << "Copy constructor called\n";
    *this = Fixed::operator=(Fixed);
}

Fixed& Fixed::operator=(Fixed const &Fixed){
    std::cout << "Copy assignment operator called\n";
    fixed = Fixed.fixed;
    return *this;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
