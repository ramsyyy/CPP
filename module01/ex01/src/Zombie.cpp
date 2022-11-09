/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:48:13 by raaga             #+#    #+#             */
/*   Updated: 2022/11/07 16:22:58 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int Zombie::index = 0;

Zombie::Zombie( void ) {
    Zombie::nb = index;
	std::cout << "constructor called zombie:" << Zombie::nb << std::endl;
    index++;
}

Zombie::~Zombie( void ) {
	std::cout << "destructor called for: " << Zombie::nb << std::endl;
}

void        Zombie::set_name( std::string name ) {
    this->_name = name;
}

void        Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << Zombie::nb << std::endl;
}


