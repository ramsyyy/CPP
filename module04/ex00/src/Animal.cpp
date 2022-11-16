/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:54:35 by raaga             #+#    #+#             */
/*   Updated: 2022/11/16 18:28:05 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void ) : _type("animal") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called " << std::endl;
}

Animal	&Animal::operator=( Animal const &copy ) {
	std::cout << "Animal copy assignement operator called " << std::endl;
	this->_type = copy._type;
	return (*this);
}

Animal::Animal( Animal const &copy ) {
	std::cout << "Animal copy constructor called " << std::endl;
	*this = copy;
}

void	Animal::makeSound( void ) const {
	std::cout << "Bruit de l'animal...." << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->_type);
}