/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:03:07 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 19:21:10 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( Weapon &weapon ) : _weapon(weapon){
    std::cout << "Constructor called" << std::endl;
}

HumanA::HumanA( std::string const name ,Weapon &weapon ) : _name(name), _weapon(weapon) {
    std::cout << "Constructor called     " << " HumanA " << this->_name << std::endl;
}

HumanA::~HumanA( void ) {
    std::cout << "Destructor called" << std::endl;
}

void    HumanA::attack( void ) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
