/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramsy <ramsy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:21 by raaga             #+#    #+#             */
/*   Updated: 2022/10/18 20:54:47 by ramsy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "constructor called" << std::endl;
	this->_index = -1;
	this->_nb_contact = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "destructor called" << std::endl;
	return ;
}

void	PhoneBook::get_nb_contact( void )
{
	std::cout << this->_index;
}

void	PhoneBook::add_new( void )
{
	std::string str;
	if (this->_nb_contact < 8) this->_nb_contact++;
	if (this->_index < 7)
		this->_index++;
	else
		this->_index = 0;
	this->_contact[this->_index].set_index(this->_index);	
	while (str.length() == 0) 
	{
		std::cout << "Prenom: ";
		getline(std::cin, str);
	}
	this->_contact[this->_index].set_first_name(str);
	str = ""; 
	
	
	while (str.length() == 0)
	{
		std::cout << "Nom: ";
		getline(std::cin, str);
	}
	this->_contact[this->_index].set_last_name(str);
	str = "";
	
	
	while (str.length() == 0)
	{
		std::cout << "Surnom: ";
		getline(std::cin, str);
	}
	this->_contact[this->_index].set_nick_name(str);
	str = "";

	
	while (str.length() == 0) 
	{
		std::cout << "Numero de telephone: ";
		getline(std::cin, str);
		for(size_t i = 0; i < str.length(); i++) 
		{
			if (isdigit(str[i]) == 0) str = ""; 
			break ;
		}
	}
	this->_contact[this->_index].set_phone_number(str);
	str = "";

	
	while (str.length() == 0)
	{
		std::cout << "secret le plus sombre: ";
		getline(std::cin, str);
	}
	this->_contact[this->_index].set_darkest_secret(str);
	str = "";
}

void	PhoneBook::search( void )
{
	std::string str;
	
	if (this->_index == -1) return ;
	for (int i = 0; i <= this->_index; i++)
	{
		this->_contact[i].get_all();
	}
	while (1)
	{
		std::cout << "Quelle contact afficher?(entrez líndex du contact) " << std::endl;
		while (str.length() != 1)
		{
			std::cout << ":";
			getline(std::cin, str);
		}
		std::istringstream istr(str);
		int i;
		istr >> i;
		if (i < this->_nb_contact)
		{
			std::cout << "Prenom: ";
			this->_contact[i].get_first_name();
			std::cout << std::endl;
			std::cout << "Nom: ";
			this->_contact[i].get_last_name();
			std::cout << std::endl;
			std::cout << "Surnom: ";
			this->_contact[i].get_nick_name();
			std::cout << std::endl;
			std::cout << "Numero de telephone: ";
			this->_contact[i].get_phone_number();
			std::cout << std::endl;
			std::cout << "Secret le plus sombre: ";
			this->_contact[i].get_darkest_secret();
			std::cout << std::endl;
			std::cout << "tapez une touche pour quitter." << std::endl;
			getline(std::cin, str);
			return ;
		}
		else std::cout << "Contact inexistant" << std::endl;
		str = "";
	}
}