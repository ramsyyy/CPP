/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:03:07 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 17:07:40 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( Weapon &weapon ) : _weapon(weapon){
    std::cout << "Constructor called HumanA" << std::endl;
}

HumanA::HumanA( std::string const name ,Weapon &weapon ) : _name(name), _weapon(weapon) {
    std::cout << "initing Constructor called HumanA " << std::endl;
}

HumanA::~HumanA( void ) {
    std::cout << "destructor called HumanA" << std::endl;
}

void    HumanA::attack( void ) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
