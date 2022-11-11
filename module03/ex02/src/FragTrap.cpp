/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:41:40 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 22:06:55 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "FragTrap default contructor called " << this->_name << std::endl;
}

FragTrap::FragTrap( std::string const name ) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap initing constructor called " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &copy ) {
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    std::cout << "FragTrap assignement " << this->_name << std::endl;
    return (*this);
}

FragTrap::FragTrap( FragTrap const &copy ) {
    *this = copy;
    std::cout << "FragTrap copy constructor called " << this->_name << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called " << this->_name << std::endl;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << this->_name << " : HIGH FIVES GUYS ??? " << std::endl;
}