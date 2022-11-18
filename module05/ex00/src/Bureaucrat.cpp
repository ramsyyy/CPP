/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:42:21 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 20:23:45 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat Destructor called " << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int n) : _name(name) {
	if (n < 1)
		throw Bureaucrat::GradeTooLowException();
	if ( n > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = n;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &copy ) {
	std::cout << "Bureaucrat copy assignement operator called " << std::endl;
	this->_name(copy._name);
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) {
	std::cout << "Bureaucrat copy constructor called " << std::endl;
	*this = copy;
}

std::string const Bureaucrat::GradeTooLowException( void ) {
	return ("Bureaucrat Grade Too Low");
}

std::string const Bureaucrat::GradeTooHighException( void ) {
	return ("Bureaucrat Grade Too Hight");
}
