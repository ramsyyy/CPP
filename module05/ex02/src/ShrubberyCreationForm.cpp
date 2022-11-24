/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:21:59 by raaga             #+#    #+#             */
/*   Updated: 2022/11/24 13:54:48 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("shruberryCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	const_cast<std::string &>(this->_target) = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "ShrubberyCreationForm Destructor called " << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy ) {
	std::cout << "ShrubberyCreationForm copy assignement operator called " << std::endl;
	const_cast<std::string&>(this->_target) = copy._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy ) {
	std::cout << "ShrubberyCreationForm copy constructor called " << std::endl;
	*this = copy;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor ) const {
	this->canExec(executor);
	std::ofstream file((this->_target + "_shrubbery").c_str());
	file << "9999999999999999999999999\n"
			"9999999999999999999999999\n"
			"9999999999999999999999999\n"
			"9999999999999999999999999\n"
			"9999999999|   |9999999999\n"
			"9999999999|   |9999999999\n"
			"9999999999|   |9999999999\n"
			"9999999999|   |9999999999\n"
			"9999999999|   |9999999999\n"
			"          |   |\n"
			"          |   |\n"
			"          |   |\n"
			"          |   |\n"
			"          |   |\n"
			"          |   |\n"
			"          99999" << std::endl;
	file.close();
}
