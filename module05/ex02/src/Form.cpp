/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:42:39 by raaga             #+#    #+#             */
/*   Updated: 2022/11/24 13:53:38 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form( void ) {
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(0) {
	std::cout << "Form initing constructor called" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooLowException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooHighException();
	this->_gradeSign = gradeSign;
	this->_gradeExec = gradeExec;
}

Form::~Form( void ) {
	std::cout << "Form Destructor called " << std::endl;
}

Form	&Form::operator=( Form const &copy ) {
	std::cout << "Form copy assignement operator called " << std::endl;
	const_cast<std::string &>(this->_name) = copy._name;
	this->_signed = copy._signed;
	this->_gradeSign = copy._gradeSign;
	this->_gradeExec =copy._gradeExec;
	return (*this);
}

Form::Form( Form const &copy ) {
	std::cout << "Form copy constructor called " << std::endl;
	*this = copy;
}

std::ostream &operator<<(std::ostream &o, Form const &copy) {
	o << copy.getName() << ", signed: " << copy.getSigned() << ", grade required for sign : " << copy.getGradeSign() << ", grade required for execute : " << copy.getGradeExec() << std::endl;
	return (o);
}

std::string Form::getName( void ) const{
	return (this->_name);
}

bool Form::getSigned( void ) const{
	return (this->_signed);
}

int	Form::getGradeSign( void ) const{
	return (this->_gradeSign);
}

int	Form::getGradeExec( void ) const{
	return (this->_gradeExec);
}

void	Form::beSigned(const Bureaucrat a) {
	if (a.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void	Form::canExec(const Bureaucrat &executor) const{
	if (!this->getSigned()) {
		throw	Form::FormNotSigned();
	}
	if (executor.getGrade() > this->getGradeExec()) {
		throw	Form::GradeTooLowException();
	}
}
