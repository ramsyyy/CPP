/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:05:28 by raaga             #+#    #+#             */
/*   Updated: 2022/11/02 17:04:13 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	std::cout << "constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed( Fixed const &copie ) {
	std::cout << "constructor of copy called" << std::endl;
	this->_nb = copie._nb;
}

Fixed::~Fixed( void ) {
	std::cout << "destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
	return (this->_nb);
}

void    Fixed::setRawBits( int const raw ) {
	this->_nb = raw;
}

Fixed   Fixed::operator=( Fixed const &copie ) const {
	this->_nb = copie.getRawBits() ;
	return (this);
}

