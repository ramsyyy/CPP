/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:01:48 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 20:02:20 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main () {
	Bureaucrat b("jaeskim", 150);

	try
	{
		b.levelUp(9);
		std::cout << b << std::endl;
		b.levelUp(1);
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b.levelDown(140);
		std::cout << b << std::endl;
		b.levelDown(10);
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}