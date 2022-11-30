/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:01:57 by raaga             #+#    #+#             */
/*   Updated: 2022/11/30 18:39:54 by raaga            ###   ########.fr       */
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
	if (this->_type == "")
		findType(str);
	std::string tab[4] = {"int", "char", "float", "double"};
	void(Scalar::*ptr_fct[4])(std::string) = {&Scalar::setInt, &Scalar::setChar, &Scalar::setFloat, &Scalar::setDouble};
	try {
		for(int i = 0; i < 4; i++) {
		if (this->_type == tab[i]) {
			(this->*ptr_fct[i])(str);
			break ;
		}
	}
	}
	catch (std::exception &e) {
		
	}
	this->displayResult();
	
}

Scalar::~Scalar( void ) {
	
}

void	Scalar::findType( std::string str ) {
	if (this->_allNumber)
		this->_type = "int";
	else if (this->_charF)
		this->_type = "float";
	else if (this->_char && str.size() == 1)
		this->_type = "char";
	else if (this->_point && !this->_charF)
		this->_type = "double";
}

void	Scalar::incorrectArg( std::string str ) {
	int point = 0;
	
	if (str == "nanf" ||  str == "+inff" || str == "-inff") {
		this->_type = "float";
		this->_nan = true;
		return ;
	}
	else if (str == "nan" || str == "-inf" || str == "+inf") {
		this->_type = "double";
		this->_nan = true;
		return ;
	}
	this->_nan = false;
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
					this->_posPoint = i;
				}
				else throw Scalar::ErrorArg();
			}
		}
	}
	if (!this->_point && !this->_charF && !this->_char)
		this->_allNumber = true;
}

void	Scalar::setInt( std::string str ) {
	this->_long = (atof(str.c_str()));
	try {
		if (this->_long > 	2147483647 || this->_long < -2147483648) throw Scalar::ImpossibleException();
			this->_int = atoi(str.c_str());
	}
	catch (std::exception &e) {
		this->_float = static_cast<float>((atof(str.c_str())));
		this->_double = static_cast<double>((atof(str.c_str())));
		return ;
	}
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	if (this->_int < -127 || this->_int > 127) throw ImpossibleException();
	if (this->_int <= 31 || this->_int == 127) throw NoDisplayException();
	this->_charValue = static_cast<char>(this->_int);

}

void	Scalar::setChar( std::string str ) {
	this->_charValue = *str.c_str();
	this->_int = static_cast<int>(this->_charValue);
	this->_float = static_cast<float>(this->_charValue);
	this->_double = static_cast<double>(this->_charValue);
}


void	Scalar::setFloat( std::string str ) {
	this->_float = atof(str.c_str());
	this->_double = static_cast<double>(this->_float);
	if (this->_float > 2147483648 || this->_float < -2147483648) throw Scalar::ImpossibleException();
	this->_int = static_cast<int>(this->_float);
	this->_charValue = static_cast<char>(this->_float);
}

void	Scalar::setDouble(std:: string str) {
	this->_double = atof(str.c_str());
	this->_float = static_cast<float>(this->_double);this->_float = static_cast<float>(this->_double);
	if (this->_double > 2147483647 || this->_double < -2147483648) throw Scalar::ImpossibleException();
	this->_int = static_cast<int>(this->_double);
	this->_charValue = static_cast<char>(this->_double);
}

bool	Scalar::addPoint(void) {
	if (!this->_point) return true;
	for (int i = this->_posPoint + 1; i < (int)this->_str.length(); i++) {
		if (this->_str[i] != '0') return false;
	}
	return true;
}

void	Scalar::displayResult(void) {
	
	
	try {
		std::cout << "char : " ;
		//std::cout << static_cast<float>(this->_charValue) <<std::endl ;
		if (this->_nan || this->_double >= 128 || this->_double <= -128) throw Scalar::ImpossibleException();
		if (this->_charValue < 32 || this->_charValue == 127) throw NoDisplayException();
		std::cout << this->_charValue << std::endl;
	}
	catch( std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "int : " ;
		if (this->_nan || this->_long > 	2147483647 || this->_long < -2147483648) throw Scalar::ImpossibleException();
		std::cout << this->_int << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "float : ";
	std::cout << this->_float ;
	if ( !this->_point  || ((this->_str[_posPoint + 1] <= '0'|| this->_str[_posPoint + 1] > '9') && (this->addPoint())))
		if (this->_nan == false && (this->_float > -1000000 && this->_float <  1000000)) std::cout << ".0"  ;
	std::cout << "f" << std::endl;
 	std::cout << "double : " ;
	std::cout << this->_double ;
	if ( !this->_point || ((this->_str[_posPoint + 1] <= '0'|| this->_str[_posPoint + 1] > '9') && (this->addPoint())))
	if (this->_nan == false && (this->_double > -1000000 && this->_double <  1000000)) std::cout << ".0" ;
	std::cout << std::endl;
	
}