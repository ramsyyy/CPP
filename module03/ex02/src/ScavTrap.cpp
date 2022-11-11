/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:49:27 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 21:32:04 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "ScavTrap default constructor called " << this->_name << std::endl;
}

ScavTrap::ScavTrap( std::string const name ) : ClapTrap(name, 100, 50, 20){
    std::cout << "ScavTrap initing name constructor called " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &copy ) {
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << "assignement called " << std::endl;
    return (*this);
}

ScavTrap::ScavTrap( ScavTrap const &copy ) {
    *this = copy;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destructor called " << this->_name << std::endl;
}


void ScavTrap::attack( const std::string &target ) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << "SvacTrap " << this->_name << " attacks " << target 
            << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else std::cout << "ScavTrap Action not possible" << std::endl;
}

void ScavTrap::gateKeeper( void ) {
    std::cout << "ScavTrap " << this->_name << " gate Keeper mode activate " << std::endl;
}