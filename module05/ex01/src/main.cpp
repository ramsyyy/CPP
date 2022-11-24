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
#include "../include/Form.hpp"

int main () {
	Bureaucrat jaeskim("jaeskim", 10);

	try
	{
		jaeskim.levelUp(9);
		std::cout << jaeskim << std::endl;
		jaeskim.levelUp(1);
		std::cout << jaeskim << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form formA("a", 10, 10);
	Form formB("b", 10, 10);
	jaeskim.signForm(formA);
	jaeskim.levelDown(10);
	jaeskim.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;

}