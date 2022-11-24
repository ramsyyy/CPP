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
	std::cout << "Bureaucrat initing constructor called" << std::endl;
	try {
		
		if (n < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (n > 150)
			throw Bureaucrat::GradeTooHighException();
		this->_grade = n;
	}
	catch( std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &copy ) {
	std::cout << "Bureaucrat copy assignement operator called " << std::endl;
	const_cast<std::string &>(this->_name) = copy._name ;
	this->_grade = copy._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &e) {
	o << e.getName() << ", Bureaucrat grade " << e.getGrade();
	return (o);
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) {
	std::cout << "Bureaucrat copy constructor called " << std::endl;
	*this = copy;
}


int Bureaucrat::getGrade() const{
	return (this->_grade);
}

std::string Bureaucrat::getName( void ) const{
	return (this->_name);
}

void Bureaucrat::levelUp( void ) {
	try {
		if (this->_grade - 1 < 1)
			throw GradeTooLowException();
		this->_grade--;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::levelDown( void ) {
	try {
		if (this->_grade + 1 > 150)
			throw GradeTooHighException();
		this->_grade++;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &a) {
	try {
		a.beSigned(*this);
		std::cout << this->_name << " signed " << a.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name << " couldn't sign " << a.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.canExec(*this);
		std::cout << this->_name << " execute " << form.getName() << std::endl;
		form.execute(*this);
		
	}
	catch (std::exception &e) {
		std::cout << this->_name << " can't execute Form : " << form.getName() << "!" << "because : " << e.what()<< std::endl;
	}
		
}