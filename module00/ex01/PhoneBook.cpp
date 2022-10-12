/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:21 by raaga             #+#    #+#             */
/*   Updated: 2022/10/12 19:11:21 by raaga            ###   ########.fr       */
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