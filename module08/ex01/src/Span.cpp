/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:43:22 by raaga             #+#    #+#             */
/*   Updated: 2022/12/09 19:41:25 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"



Span::Span( void ) {
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span( unsigned int N ) : _size(N) , _array(N){
    std::cout << "Span initing Constructor called" << this->_array.size() << std::endl;
    
}

Span::~Span( void ) {
	std::cout << "Span Destructor called " << std::endl;
}

Span	&Span::operator=( Span const &copy ) {
	std::cout << "Span copy assignement operator called " << std::endl;
    this->_size = copy._size;
    this->_array = std::vector<int>(this->_size);
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
    std::cout << "LA : " << i << " " << this->_array.size() << std::endl;
    if ((unsigned int)i >= this->_size)
        throw ErrorSize();
    if (this->_array.begin() + i != this->_array.end())
        this->_array.erase(this->_array.begin() + i);
    this->_array.insert(this->_array.begin() + i ,number);
    i++;
}

int     Span::shortestSpan( void ) {
    
    int tmp = this->_array[0] - this->_array[1];
    if (tmp < 0) tmp = -1 * tmp;
    for (int i = 0; i < static_cast<int>(this->_array.size()); i++) {
        for (int x = i + 1; x < static_cast<int>(this->_array.size()); x++) {
            if (this->_array[i] - this->_array[x] < 0) 
            {
                if (tmp > -1 * (this->_array[i] - this->_array[x]))
                    tmp = this->_array[i] - this->_array[x];
            }
            else
            {
                if (tmp > this->_array[i] - this->_array[x])
                    tmp = this->_array[i] - this->_array[x];
            }
            if (tmp < 0) tmp = -1 * tmp;
        }
    }
    return (tmp);
}

int Span::i = 0;