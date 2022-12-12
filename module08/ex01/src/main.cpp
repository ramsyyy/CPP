/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:42:13 by raaga             #+#    #+#             */
/*   Updated: 2022/12/12 17:53:14 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"


int main() 
{
	std::cout << "---BASIC TEST---" << std::endl;

	Span sp = Span(10000);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
    //sp.affiche();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "---ERROR TESTS---" << std::endl;

	try
	{
		Span sp1 = Span(2);
		sp1.addNumber(4);
		sp1.addNumber(3);
		sp1.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp2 = Span(2);
		sp2.addNumber(3);
		std::cout << sp2.shortestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---RANGE ITERATORS TEST---" << std::endl;

	Span				sp3(3);
	std::vector<int>	tmp;

	tmp.push_back(25);
	tmp.push_back(5);
	tmp.push_back(42);
	sp3.addNumber(tmp.begin(), tmp.end());
   try{ sp3.addNumber(120);}
   catch(std::exception &e) {std::cout << e.what() << std::endl;}
	std::cout << sp3.shortestSpan() << std::endl;
    sp3.affiche();
	std::cout << "---ADVANCED TEST---" << std::endl;

	Span sp4 = Span(15000);
    std::vector<int>	tp;
    
	/*sp4.randomNumber();
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;*/
    }
