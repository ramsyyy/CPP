/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:02:39 by raaga             #+#    #+#             */
/*   Updated: 2022/12/07 18:38:12 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>
#include <deque>


int	main( void )
{
	std::deque<int>				deque;
	std::deque<int>::iterator	it;

	deque.push_front(42);
	deque.push_front(41);
	deque.push_front(40);
	deque.push_back(43);
	deque.push_back(44);
	it = easyfind(deque, 44);
	printIt(it, deque.end());
	it = easyfind(deque, 44);
	printIt(it, deque.end());
	deque.empty();
}