/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:22:26 by raaga             #+#    #+#             */
/*   Updated: 2023/03/21 22:22:27 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/date.hpp"

date::date( void ) {
	std::cout << "date Default Constructor called" << std::endl;
}

date::~date( void ) {
	std::cout << "date Destructor called " << std::endl;
}

date	&date::operator=( date const &copy ) {
	std::cout << "date copy assignement operator called " << std::endl;
}

date::date( date const &copy ) {
	std::cout << "date copy constructor called " << std::endl;
	*this = copy;
}

