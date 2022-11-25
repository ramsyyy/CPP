/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:02:00 by raaga             #+#    #+#             */
/*   Updated: 2022/11/25 17:42:51 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Scalar.hpp"

void ifInt(char *str) {
	if (*str == '-') str++;
	while (*str){
		
		if (!isdigit(*str)) {
			throw std::exception();
		}
		str++;
	}
}

void ifchar(std::string str) {
	if (str.size() > 4)
		throw std::exception();
}

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "error a few arguments " << std::endl;
		return (0);
	}
	try {
		Scalar scalar(av[1]);
	}
	catch (Scalar::ErrorArg &e) {
		std::cout << e.what() << std::endl;
	}
	
	/*
	int a = 0;
	std::string str = av[1];

	
	try {
		ifchar(str);
		char c = static_cast<char>(atoi(av[1]));
		std::cout << c << std::endl;
		ifInt(av[1]);
		a = atoi(av[1]);
		std::cout << a << std::endl;
		

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}*/
	return (0);
}
