/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:29 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 21:44:21 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main() {
    ScavTrap ff;
    ScavTrap a("ramsy");
    ScavTrap b(a);
    ScavTrap d("rrrr");
    ScavTrap c = d;
    ClapTrap e("draaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    
    a.attack( " ramsy ");
    e.attack("ramsyyyy");
    b.attack("rrrr");
    c.gateKeeper();
    return (0);
}