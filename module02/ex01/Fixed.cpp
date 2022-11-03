/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:20 by raaga             #+#    #+#             */
/*   Updated: 2022/11/03 18:03:27 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) {
	std::cout << "Default  constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed( int const integer ) {
    std::cout << "converter Int constructor called" << std::endl;
    this->_nb = integer<<8;
}

Fixed::Fixed( float const floater ) {
    std::cout << "converter float constructor called" << std::endl;
    this->_nb = std::roundf(floater * (1<<8));
    std::cout << this->_nb <<std::endl;
}

Fixed   &Fixed::operator=( Fixed const &copie ) {
	std::cout << "Copy assignment operator called " <<std::endl;
	this->_nb = copie.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const &copie ) {
    o << copie.toFloat();
    return (o);
}

Fixed::Fixed( Fixed const &copie ) {
	std::cout << "copy constructor  called" << std::endl;
	*this = copie ;
}

Fixed::~Fixed( void ) {
	std::cout << "destructor called" << std::endl;
}

int Fixed::toInt( void ) const {
    return (this->_nb / 256);
}


float Fixed::toFloat( void ) const {
    
    return ((float)this->_nb / 256);
}

int     Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void    Fixed::setRawBits( int const raw ) {
	this->_nb = raw;
}
