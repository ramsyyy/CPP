/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:24:11 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 22:26:52 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal default constructor called " << std::endl;
}

Animal &Animal::operator=( Animal const &copy ) {
    
}

Animal::~Animal( void ) {
    std::cout << "animal destructor called " << std::endl;
}