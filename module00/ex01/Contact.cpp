/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:16 by raaga             #+#    #+#             */
/*   Updated: 2022/10/12 19:07:58 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ){
    std::cout << "constructor Contact called" << std::endl;
    return ;
}

Contact::~Contact( void ){
    std::cout << "destructor Contact called" << std::endl;
    return ;
}

void    Contact::set_first_name(std::string input)
{
    this->_first_name = input;
}

void    Contact::set_last_name(std::string input)
{
    this->_last_name = input;
}

void    Contact::set_nick_name(std::string input)
{
    this->_nick_name = input;
}

void    Contact::set_phone_number(std::string input)
{
    this->_phone_number = input;
}

void    Contact::set_darkest_secret(std::string input)
{
    this->_darkest_secret = input;
}