/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:40:50 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 17:07:34 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	std::cout << "constructor called Weapon" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "destructor called Weapon" << std::endl;
}

std::string const &Weapon::getType( void ) {
	return (this->_type);
}

void	Weapon::setType(std::string str) {
	this->_type = str;
}