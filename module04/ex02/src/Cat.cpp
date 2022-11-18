/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:41:00 by raaga             #+#    #+#             */
/*   Updated: 2022/11/17 19:59:54 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat( void ) {
	delete this->_brain;
	std::cout << "Cat Destructor called " << std::endl;
	
}

Cat	&Cat::operator=( Cat const &copy ) {
	std::cout << "Cat copy assignement operator called " << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return (*this);
}

Cat::Cat( Cat const &copy ) : Animal(copy) {
	std::cout << "Cat copy constructor called " << std::endl;
	*this = copy;
}

void Cat::makeSound( void ) const{
	std::cout << "MIAOU MIAOU " << std::endl;
}
