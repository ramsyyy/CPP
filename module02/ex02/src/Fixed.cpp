/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:17:47 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 17:43:20 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) {
	//std::cout << "Default  constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed( int const integer ) {
    //std::cout << "converter Int constructor called" << std::endl;
    this->_nb = integer<<8;
}

Fixed::Fixed( float const floater ) {
    //std::cout << "converter float constructor called" << std::endl;
    this->_nb = roundf(floater * (1<<8));
}


/*  operateur */

Fixed   &Fixed::operator=( Fixed const &copie ) {
	//std::cout << "Copy assignment operator called " <<std::endl;
	this->_nb = copie.getRawBits();
	return (*this);
}

bool    Fixed::operator>( Fixed const &copie ) const{
    return (this->_nb > copie.getRawBits());
}

bool    Fixed::operator>=( Fixed const &copie ) const{
    return (this->_nb >= copie.getRawBits());
}

bool    Fixed::operator<( Fixed const &copie ) const{
    return (this->_nb < copie.getRawBits());
}

bool    Fixed::operator<=( Fixed const &copie ) const{
    return (this->_nb <= copie.getRawBits());
}

bool    Fixed::operator==( Fixed const &copie ) const{
    return (this->_nb == copie.getRawBits());
}

bool    Fixed::operator!=( Fixed const &copie ) const{
    return (this->_nb != copie.getRawBits());
}

Fixed     Fixed::operator+( Fixed const &copie ) const{
    return Fixed(this->toFloat() + copie.toFloat());
}

Fixed     Fixed::operator-( Fixed const &copie ) const{
    return Fixed(this->toFloat() - copie.toFloat());
}

Fixed     Fixed::operator*( Fixed const &copie ) const{
    return Fixed(this->toFloat() * copie.toFloat());
}

Fixed     Fixed::operator/( Fixed const &copie ) const{
    return Fixed(this->toFloat() / copie.toFloat());
}


Fixed     Fixed::operator++( void ){
    this->_nb++;
    return (*this);
}

Fixed     Fixed::operator++( int ){
    Fixed tmp(*this);
    this->_nb++;
    return (tmp);
}

Fixed     Fixed::operator--( void ){
    this->_nb--;
    return (*this);
}

Fixed     Fixed::operator--( int ){
    Fixed tmp(*this);
    this->_nb--;
    return (tmp);
}


Fixed   &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b) return a;
    else return (b);
}

Fixed  const &Fixed::min(Fixed const &a, Fixed const &b) {
    if (a < b) return a;
    else return (b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b) return a;
    else return (b);
}

Fixed   const &Fixed::max(Fixed const &a, Fixed const &b) {
    if (a > b) return a;
    else return (b);
}





std::ostream & operator<<(std::ostream & o, Fixed const &copie ) {
    o << copie.toFloat();
    return (o);
}

Fixed::Fixed( Fixed const &copie ) {
	//std::cout << "copy constructor  called" << std::endl;
	*this = copie ;
}

Fixed::~Fixed( void ) {
	//std::cout << "destructor called" << std::endl;
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