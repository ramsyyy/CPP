/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:22:58 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 19:20:52 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string const name) : _name(name) {
    this->_weapon = NULL;
    std::cout << "Constructor called" << " HumanB " << this->_name << std::endl;
}

HumanB::~HumanB( void ) {
    std::cout << "Destructor called" << " HumanB " << this->_name << std::endl;
}

void    HumanB::attack( void ) const {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
}