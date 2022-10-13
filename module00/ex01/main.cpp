/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:19:47 by raaga             #+#    #+#             */
/*   Updated: 2022/10/13 21:36:11 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>

int compar_list(std::string read)
{
	if (read == "ADD") return (1);
	if (read == "SEARCH") return (1);
	if (read == "EXIT") return (1);
	return (0);
}



int main()
{
	PhoneBook phone_book;
	std::string read;
	
	system("clear");
	std::cout << "****************************************PHONEBOOK****************************************" << std::endl;
	std::cout << "*                  	POUR AJOUTER UN NOUVEAU CONTACT TAPEZ \"ADD\"                     *" << std::endl;
	std::cout << "*                  	POUR AFFICHER LES CONTACTS TAPEZ \"SEARCH\"                       *" << std::endl;
	std::cout << "*                  	POUR QUITTER LE PHONEBOOK TAPEZ \"EXIT\"                          *" << std::endl;
	std::cout << "*****************************************************************************************" << std::endl;
	while (1)
	{
		std::cout << "				ENTREE : ";
		getline(std::cin, read);
		if (compar_list(read) == 1) 
		{
			std::cout << std::endl;
			phone_book.add_new(&phone_book.tab_contact[0]);
			std::cout << std::endl;
		}
	}
	return (0);
}