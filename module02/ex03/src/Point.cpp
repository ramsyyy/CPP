/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:55:50 by raaga             #+#    #+#             */
/*   Updated: 2022/12/14 17:16:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point( void ) : _x(0) , _y(0) {
    std::cout << "Default Construtor called " << std::endl;
}

Point::Point( float const a, float const b) : _x(a),  _y(b) {
    std::cout << "constructor initing called" << std::endl;
}

Point::Point( Point const &copie ) {
    std::cout << "copy constructor called" << std::endl;
    *this = copie;
}

Point::~Point( void ) {
    std::cout << "Destructor  called" << std::endl;
}

Fixed    Point::getX( void ) const{
    return (this->_x);
}

Fixed    Point::getY( void ) const{
    return (this->_y);
}

Point &Point::operator=(Point const &copie) {
    std::cout << "surcharge d'assignation called" << std::endl;
    if (this != &copie)
    {
        this->_x = copie.getX();
        this->_y = copie.getY();
    }
    return (*this);
}