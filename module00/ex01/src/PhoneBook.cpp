/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:21 by raaga             #+#    #+#             */
/*   Updated: 2022/10/20 20:50:24 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	this->_index = -1;
	this->_nb_contact = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

static int	is_num(std::string str)
{
	for(size_t i = 0;i < str.length(); i++) 
	{
		if (str[i] < '0' || str[i] >'9')
			return (0);
	}
	return (1);
}

static int	is_alpha(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]) == 0)
			return (0);
	}
	return (1);
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
		if (is_alpha(str) == 0)
			str = "";
		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_first_name(str);
	str = ""; 
	
	
	while (str.length() == 0)
	{
		std::cout << "Nom: ";
		getline(std::cin, str);
		if (is_alpha(str) == 0)
			str = "";
		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_last_name(str);
	str = "";
	
	
	while (str.length() == 0)
	{
		std::cout << "Surnom: ";
		getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_nick_name(str);
	str = "";

	
	while (str.length() == 0) 
	{
		std::cout << "Numero de telephone: ";
		getline(std::cin, str);
		if (std::cin.eof())
			return ;
		if (is_num(str) == 0)
			str = "";
	}
	this->_contact[this->_index].set_phone_number(str);
	str = "";

	
	while (str.length() == 0)
	{
		std::cout << "secret le plus sombre: ";
		getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	this->_contact[this->_index].set_darkest_secret(str);
	str = "";
}

		

void	PhoneBook::search( void )
{
	std::string str;
	
	if (this->_index == -1) return ;
	for (int i = 0; i < this->_nb_contact; i++)
	{
		this->_contact[i].get_all();
	}
	while (1)
	{
		std::cout << "Quelle contact afficher?(entrez l'index du contact) " << std::endl;
		while (str.length() != 1)
		{
			std::cout << ":";
			getline(std::cin, str);
			if (std::cin.eof())
				return ;
			if (is_num(str) == 0) str = "";
		}
		std::istringstream istr(str);
		int i;
		istr >> i;
		std::cout << i << std::endl;
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
			if (std::cin.eof())
				return ;
			return ;
		}
		else std::cout << "Contact inexistant" << std::endl;
		str = "";
	}
}