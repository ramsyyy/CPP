/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:43:13 by raaga             #+#    #+#             */
/*   Updated: 2022/11/10 18:39:21 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>


ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10) , _attackDamage(0){
    std::cout << "deafult constructor called " << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10) , _attackDamage(0) {
    std::cout << "initing name constructor called " << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &copy ) {
    this->_name = copy.getName();
    this->_hitPoints = copy.getHitPoints();
    this->_energyPoints = copy.getEnergyPoints();
    this->_attackDamage = copy.getAttackDamage();
    return (*this);
}

ClapTrap::ClapTrap( ClapTrap const &copy ) {
    *this = copy;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "destructor called " << std::endl;
}

int ClapTrap::getHitPoints( void ) const{
    return (this->_hitPoints);
}

std::string const ClapTrap::getName( void ) const{
    return (this->_name);
}

int ClapTrap::getEnergyPoints( void ) const{
    return (this->_energyPoints);
}
int ClapTrap::getAttackDamage( void ) const{
    return (this->_attackDamage);
}

void ClapTrap::takeDamage( unsigned int amount ) {
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " have " << this->_hitPoints << " hit points " << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " regenered " << amount << " hit points " << std::endl;
        this->_energyPoints -= 1;
    }
    else std::cout << "Action not possible" << std::endl;
}

void ClapTrap::attack( const std::string &target ) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << "Claptrap " << this->_name << " attacks " << target 
            << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else std::cout << "Action not possible" << std::endl;
}

