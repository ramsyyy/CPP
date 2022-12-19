/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:20 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 17:42:28 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed( int const integer ) {
    std::cout << "Int constructor called" << std::endl;
    this->_nb = integer<<8;
}

Fixed::Fixed( float const floater ) {
    std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(floater * (1<<8));
}

Fixed   &Fixed::operator=( Fixed const &copie ) {
	std::cout << "Copy assignment operator called" <<std::endl;
	this->_nb = copie.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const &copie ) {
    o << copie.toFloat();
    return (o);
}

Fixed::Fixed( Fixed const &copie ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copie ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const {
    return (this->_nb / 256);
}

float Fixed::toFloat( void ) const {
    return ((float)this->_nb / 256);
}

int     Fixed::getRawBits( void ) const {
	return (this->_nb);
}

void    Fixed::setRawBits( int const raw ) {
	this->_nb = raw;
}
