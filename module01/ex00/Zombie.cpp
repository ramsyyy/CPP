/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:41:20 by raaga             #+#    #+#             */
/*   Updated: 2022/10/21 18:14:36 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "destructor called for: " << this->_name << std::endl;
}

void		Zombie::setName( std::string name ) {
	this->_name = name;
}



void        Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


