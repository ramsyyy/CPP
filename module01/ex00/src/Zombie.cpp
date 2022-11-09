/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:41:20 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 18:12:00 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "default constructor called " << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name) {
	std::cout << "initing constructor called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "destructor called for: "  << this->_name << std::endl;
}

void        Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


