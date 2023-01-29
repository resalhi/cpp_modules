/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:13:00 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/29 12:23:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    this->fixed = 0;
}

Fixed::Fixed(const int i){
    std::cout << "Int constructor called\n";
    this->fixed = i * (1 << this->fixedbit);
}

Fixed::Fixed(const float i){
    std::cout << "Float constructor called\n";
    this->fixed = roundf(i * (1 << this->fixedbit));
}

Fixed::Fixed(Fixed const &Fixed){
    std::cout << "Copy constructor called\n";
    this->operator=(Fixed);
}

Fixed& Fixed::operator=(Fixed const &Fixed){
    std::cout << "Copy assignment operator called\n";
    this->fixed = Fixed.fixed;
    return *this;
}

float Fixed::toFloat(void) const{
    return (float)(this->fixed) / (1 << (this->fixedbit));
}

int Fixed::toInt(void) const{
    return (int)(roundf(this->fixed >> this->fixedbit));
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed){
    out << Fixed.toFloat();
    return (out);
}
