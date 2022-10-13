/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:21 by raaga             #+#    #+#             */
/*   Updated: 2022/10/13 20:14:03 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "destructor called" << std::endl;
	return ;
}

void	PhoneBook::add_new(Contact *new_contact)
{
	std::string str;
	
	
	while (str.length() == 0) 
	{
		std::cout << "				Prenom: ";
		getline(std::cin, str);
	}
	new_contact->set_first_name(str);
	str = ""; 
	
	
	while (str.length() == 0)
	{
		std::cout << "				Nom: ";
		getline(std::cin, str);
	}
	new_contact->set_last_name(str);
	str = "";
	
	
	while (str.length() == 0)
	{
		std::cout << "				Surnom: ";
		getline(std::cin, str);
	}
	new_contact->set_nick_name(str);
	str = "";

	
	while (str.length() == 0) 
	{
		std::cout << "				Numero de telephone: ";
		getline(std::cin, str);
		for(size_t i = 0; i < str.length(); i++) 
		{
			if (isdigit(str[i]) == 0) str = ""; 
			break ;
		}
	}
	new_contact->set_phone_number(str);
	str = "";

	
	while (str.length() == 0)
	{
		std::cout << "				secret le plus sombre: ";
		getline(std::cin, str);
	}
	new_contact->set_darkest_secret(str);
	str = "";
}