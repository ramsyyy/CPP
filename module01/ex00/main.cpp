/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:44:15 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 14:41:11 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		randomChup( std::string name ) {
	Zombie neww = Zombie(name);

	neww.announce();
}

Zombie		*newZombie( std::string name ) {
	return (new Zombie(name));
}

int main()
{
	Zombie *z1;

	z1 = newZombie("ramssssss");
	z1->announce();
	randomChup("ramsy");
	delete z1;
	return (0);
}
