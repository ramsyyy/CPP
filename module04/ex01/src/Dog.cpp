/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:33:26 by raaga             #+#    #+#             */
/*   Updated: 2022/11/17 19:57:40 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog( void ) {
	delete this->_brain;
	std::cout << "Dog Destructor called " << std::endl;
}

Dog	&Dog::operator=( Dog const &copy ) {
	std::cout << "Dog copy assignement operator called " << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return (*this);
}

Dog::Dog( Dog const &copy ) : Animal(copy) {
	std::cout << "Dog copy constructor called " << std::endl;
	*this = copy;
}

void Dog::makeSound( void ) const { 
	std::cout << "WOUAF WOUAF " << std::endl;
}