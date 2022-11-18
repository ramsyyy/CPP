/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:44:55 by raaga             #+#    #+#             */
/*   Updated: 2022/11/17 17:32:08 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor called " << std::endl;
}

Brain	&Brain::operator=( Brain const &copy ) {
	std::cout << "Brain copy assignement operator called " << std::endl;
	for (int i = 0; i < 100; i++) this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::Brain( Brain const &copy ) {
	std::cout << "Brain copy constructor called " << std::endl;
	*this = copy;
}

