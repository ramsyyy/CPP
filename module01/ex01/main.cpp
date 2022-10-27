/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:49:11 by raaga             #+#    #+#             */
/*   Updated: 2022/10/27 15:19:18 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie      *zombieHorde( int N, std::string name ) {
    Zombie *zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++) zombieHorde[i].set_name(name);
    return (zombieHorde);
}

int main()
{
	Zombie *z1 = zombieHorde(42, "ramsy");
    
    for (int i = 0; i < 42; i++) z1[i].announce();
    delete [] z1;
	return (0);
}
