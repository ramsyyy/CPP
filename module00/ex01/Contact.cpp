/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:16 by raaga             #+#    #+#             */
/*   Updated: 2022/10/12 18:20:42 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ){
    std::cout << "constructor called" << std::endl;
    return ;
}

Contact::~Contact( void ){
    std::cout << "destructor called" << std::endl;
    return ;
}

void    set_first_name(std::string input)
{
    this->_first_name;
}

void    set_last_name(std::string input)
{
    this->_last_name;
}

void    set_nick_name(std::string input)
{
    this->_nick_name;
}

void    set_phone_number(std::string input)
{
    this->phone_number;
}

void    set_darkest_secret(std::string input)
{
    this->darkest_secret;
}