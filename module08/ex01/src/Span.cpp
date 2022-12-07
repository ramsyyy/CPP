/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:43:22 by raaga             #+#    #+#             */
/*   Updated: 2022/12/07 19:10:50 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"



Span::Span( void ) {
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span( unsigned int N ) : _size(N) {
    std::cout << "Span initing Constructor called" << std::endl;
    this->_array = new int[this->_size];
}

Span::~Span( void ) {
	std::cout << "Span Destructor called " << std::endl;
    delete [] this->_array;
}

Span	&Span::operator=( Span const &copy ) {
	std::cout << "Span copy assignement operator called " << std::endl;
    this->_size = copy._size;
    this->_array = new int[this->_size];
    for(unsigned int i = 0; i < this->_size; i++) {
        this->_array[i] = copy._array[i];
    }
    return (*this);
}

Span::Span( Span const &copy ) {
	std::cout << "Span copy constructor called " << std::endl;
	*this = copy;
}

void    Span::addNumber(int number) {
    std::cout << i << std::endl;
    if ((unsigned int)i >= this->_size)
        throw ErrorSize();
    this->_array[i] = number;
    i++;
}

int Span::i = 0;