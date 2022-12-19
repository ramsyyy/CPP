/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:43:22 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 18:14:58 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"



Span::Span( void ) : _stock(0) {
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span( unsigned int N ) : _stock(0) , _size(N) , _array(N){
    std::cout << "Span initing Constructor called" << std::endl;
    
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
    if ((unsigned int)this->_stock >= this->_size)
        throw ErrorSize();
    if (this->_array.begin() + this->_stock != this->_array.end())
        this->_array.erase(this->_array.begin() + this->_stock);
    this->_array.insert(this->_array.begin() + this->_stock ,number);
    this->_stock++;
}

void    Span::affiche( void ) {
    for (unsigned long  i = 0; i < this->_array.size(); i++) {
        std::cout << this->_array[i] << std::endl;
    }
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if ((unsigned int)this->_stock >= this->_size)
        throw ErrorSize();
    std::vector<int>::iterator it = this->_array.begin();
    for (std::vector<int>::iterator i = begin; i != end; i++) {
        *it = *i;
        it++;
        this->_stock++;
    }
    for ( unsigned long i = 0; i < this->_array.size(); i++) {
        std::cout << this->_array[i] << std::endl;
    }
}

int     Span::shortestSpan( void ) {
    
    if (this->_stock <= 1) throw ErrorSize();
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

int     Span::longestSpan( void ) {
    if (this->_stock <= 1) throw ErrorSize();
    int max = this->_array[0];
    int min = this->_array[0];

    for (int i = 1; i < static_cast<int>(this->_array.size()); i++) {
        if (min > this->_array[i])
            min = this->_array[i];
        if (max < this->_array[i])
            max = this->_array[i];
    }
    return ((max - min)>0?(max - min):(-1 * (max - min)));
}

