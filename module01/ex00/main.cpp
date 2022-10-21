/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:44:15 by raaga             #+#    #+#             */
/*   Updated: 2022/10/21 18:21:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		randomChup( std::string name ) {
	Zombie neww;
	
	neww.setName(name);
	neww.announce();
}

Zombie		*newZombie( std::string name ) {
	Zombie *neww;

	
	neww->setName(name);
	std::cout << "jsuis la " << std::endl;
	return (neww);
}


int main()
{
	Zombie *z1;

	z1 = newZombie("ramssssss");
	//z1->announce();
	//randomChup("ramsy");
	
	return (0);
}
