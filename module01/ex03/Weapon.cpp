/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:40:50 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 19:20:06 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
}

Weapon::~Weapon( void ) {
}

std::string const &Weapon::getType( void ) {
	return (this->_type);
}

void	Weapon::setType(std::string str) {
	this->_type = str;
}