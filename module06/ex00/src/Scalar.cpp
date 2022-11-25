/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:01:57 by raaga             #+#    #+#             */
/*   Updated: 2022/11/25 20:01:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Scalar.hpp"

Scalar::Scalar( void ) {
	
}

Scalar::Scalar( char * str) : _str(str) {
	this->_point = false;
	this->_charF = false;
	this->_char = false;
	this->_allNumber = false;
	incorrectArg(str);
	findType(str);
	std::string tab[4] = {"int", "char", "float", "double"};
	void(Scalar::*ptr_fct[4])(std::string) = {&Scalar::setInt, &Scalar::setChar, &Scalar::setFloat, &Scalar::setDouble};
	try {
		std::cout << this->_type <<std::endl;
		for(int i = 0; i < 3; i++) {
		if (this->_type == tab[i]) {
			(this->*ptr_fct[i])(str);
			break ;
		}
	}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/*
	try {
		std::cout << "Int : ";
		setInt(str);
		std::cout << this->_int << std::endl;
	}
	catch (Scalar::ImpossibleException &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Char : ";
		setChar(str);
		std::cout << "\'" << this->_charValue << "\'" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	setFloat(str);*/
}

Scalar::~Scalar( void ) {
	
}

void	Scalar::findType( std::string str ) {
	if (this->_allNumber)
		this->_type = "int";
	else if (this->_point && this->_charF)
		this->_type = "float";
	else if (this->_char && str.size() == 1)
		this->_type = "char";
	else if (this->_point && !this->_charF)
		this->_type = "double";
}

void	Scalar::incorrectArg( std::string str ) {
	int point = 0;
	
	for (int i = 0; str[i] != 0; i++) {
		if (i == 0 && str[i] == '-') i++;
		if (!isdigit(str[i])) {
			this->_char = true;
			if (isalpha(str[i]) && str.size() != 1)
			{
				if (str[i] == 'f') this->_charF = true;
				if (str[i] != 'f') 
					throw Scalar::ErrorArg();
				else if (str[i] == 'f' && str[i + 1])
					throw Scalar::ErrorArg();
			}
			else if (str.size() != 1 && !isalpha(str[i])){
				if (point < 1 && str[i] == '.') {
					point++;
					this->_point = true;
				}
				else throw Scalar::ErrorArg();
			}
		}
	}
	if (!this->_point && !this->_charF && !this->_char)
		this->_allNumber = true;
}

void	Scalar::setInt( std::string str ) {
	if (this->_allNumber) {
		this->_long = (atol(str.c_str()));
		if (this->_long > 	2147483647 || this->_long < -2147483648) throw Scalar::ImpossibleException();
			this->_int = (int)this->_long;
	}
	else if (this->_charF || this->_point) {
		this->_long = (atol(str.c_str()));
		if (this->_long > 	2147483647 || this->_long < -2147483648) throw Scalar::ImpossibleException();
			this->_int = (int)this->_long;
	}
	else if (this->_char && str.size() == 1){
		this->_int = static_cast<int>(*str.c_str());
	}
	std::cout << this->_int << std::endl;
}

void	Scalar::setChar( std::string str ) {
	if (this->_char && str.size() == 1){
		if (*str.c_str() <= 31 || *str.c_str() == 127 ) throw NoDisplayException();
		this->_charValue = *str.c_str();
	}
	else {
		int tmp = atoi(str.c_str());
		if (tmp < -127 || tmp > 127) throw ImpossibleException();
		if (tmp <= 31 || tmp == 127) throw NoDisplayException();
		this->_charValue = tmp;
	}
	std::cout << this->_charValue << std::endl;
}

void	Scalar::setFloat( std::string str ) {
	
}

void	Scalar::setDouble(std:: string str) {
	(void)str;
	std::cout << "jhsgadhjfgajksdgfhjsdgjf" << std::endl;
}