/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:22:58 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 17:07:05 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string const name) : _name(name) {
    this->_weapon = NULL;
    std::cout << "initing Constructor called HumanB" << std::endl;
}

HumanB::~HumanB( void ) {
    std::cout << "destructor called HumanB" << std::endl;
}

void    HumanB::attack( void ) const {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
}