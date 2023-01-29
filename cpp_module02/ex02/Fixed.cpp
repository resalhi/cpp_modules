/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:13:00 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/29 16:41:38 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->fixed = 0;
}

Fixed::Fixed(const int i){
    this->fixed = i * (1 << this->fixedbit);
}

Fixed::Fixed(const float i){
    this->fixed = roundf(i * (1 << this->fixedbit));
}

Fixed::Fixed(Fixed const &Fixed){
    this->operator=(Fixed);
}

Fixed& Fixed::operator=(Fixed const &Fixed){
    this->fixed = Fixed.fixed;
    return *this;
}

float Fixed::toFloat(void) const{
    return (float)(this->fixed) / (1 << (this->fixedbit));
}

int Fixed::toInt(void) const{
    return (roundf(this->fixed / (1 << this->fixedbit)));
}

Fixed::~Fixed(){}

bool    Fixed::operator>(const Fixed& Fixed) const{
    return (this->fixed > Fixed.getRawbits());
}
bool    Fixed::operator<(const Fixed& Fixed) const{
    return (this->fixed < Fixed.getRawbits());
}
bool    Fixed::operator>=(const Fixed& Fixed) const{
    return (this->fixed >= Fixed.getRawbits());
}
bool    Fixed::operator<=(const Fixed& Fixed) const{
    return (this->fixed <= Fixed.getRawbits());
}
bool    Fixed::operator==(const Fixed& Fixed) const{
    return (this->fixed == Fixed.getRawbits());
}
bool    Fixed::operator!=(const Fixed& Fixed) const{
    return (this->fixed != Fixed.getRawbits());
}

int Fixed::getRawbits(void) const{
    return (fixed);
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed){
    out << Fixed.toFloat();
    return (out);
}

Fixed& Fixed::operator+(Fixed const &Fixed){
    this->fixed = this->fixed + Fixed.fixed;
    return (*this);
}

Fixed& Fixed::operator-(Fixed const &Fixed){
    this->fixed = this->fixed - Fixed.fixed;
    return (*this);
}

Fixed& Fixed::operator*(Fixed const &Fixed){
    this->fixed = toFloat() * Fixed.fixed;
    return (*this);
}

Fixed& Fixed::operator/(Fixed const &Fixed){
    this->fixed = toFloat() / Fixed.fixed; 
    return (*this);
}

Fixed& Fixed::operator++(void){
    ++fixed;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    operator++();
    return (temp);
}

Fixed& Fixed::operator--(void){
    --fixed;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    operator--();
    return (temp);
}

const Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a > b)
        return (b);
    else
        return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if (a > b)
        return (b);
    else
        return (a);
}

const Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a < b)
        return (b);
    else
        return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a < b)
        return (b);
    else
        return (a);
}
