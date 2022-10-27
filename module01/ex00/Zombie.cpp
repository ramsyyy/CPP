/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:41:20 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 14:39:44 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	std::cout << "constructor called" << std::endl;
	this->_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << "destructor called for: " << this->_name << std::endl;
}

void        Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


