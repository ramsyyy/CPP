/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:29 by raaga             #+#    #+#             */
/*   Updated: 2022/11/10 18:38:22 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main() {
    ClapTrap a("ramsy");
    ClapTrap b("gigi");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(1);
}