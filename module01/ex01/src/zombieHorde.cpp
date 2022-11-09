/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:21:22 by raaga             #+#    #+#             */
/*   Updated: 2022/11/07 16:21:45 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie      *zombieHorde( int N, std::string name ) {
    Zombie *zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++) zombieHorde[i].set_name(name);
    return (zombieHorde);
}