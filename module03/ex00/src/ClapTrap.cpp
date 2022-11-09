/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:43:13 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 20:12:07 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>


ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10) , _attackDamage(0){
    std::cout << "deafult constructor called " << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
    std::cout << "initing name constructor called " << std::endl;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "destructor called " << std::endl;
}

int ClapTrap::get_hitPoint( void ) {
    return (this->_hitPoint);
}

void ClapTrap::attack( const std::string &target ) {
    std::cout << "Claptrap " << this->_name << " attacks " << target 
        << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
    target.takeDamage(this->_attackDamage);
}

void ClapTrap::takeDamage( unsigned int amount ) {
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " have " << this->_hitPoint << " hit points " << std::endl;
}