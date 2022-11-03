/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:05:28 by raaga             #+#    #+#             */
/*   Updated: 2022/11/03 15:43:34 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	std::cout << "Default  constructor called" << std::endl;
	this->_nb = 0;
}

Fixed   &Fixed::operator=( Fixed const &copie ) {
	std::cout << "Copy assignment operator called " <<std::endl;
	this->_nb = getRawBits();
	return (*this);
}

Fixed::Fixed( Fixed const &copie ) {
	std::cout << "copy constructor  called" << std::endl;
	*this = copie ;
}

Fixed::~Fixed( void ) {
	std::cout << "destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void    Fixed::setRawBits( int const raw ) {
	this->_nb = raw;
}
