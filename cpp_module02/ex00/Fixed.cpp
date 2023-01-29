/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:13:00 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/29 16:27:58 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    setRawBits(0);
}

Fixed::Fixed(Fixed const &Fixed){
    std::cout << "Copy constructor called\n";
    this->operator=(Fixed);
}

Fixed& Fixed::operator=(Fixed const &Fixed){
    std::cout << "Copy assignment operator called\n";
    this->fixed = Fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called\n";
    return (fixed);
}

void Fixed::setRawBits( int const raw ){
    this->fixed = raw;
}
