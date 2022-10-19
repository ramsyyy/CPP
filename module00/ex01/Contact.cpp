/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramsy <ramsy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:16 by raaga             #+#    #+#             */
/*   Updated: 2022/10/18 20:23:15 by ramsy            ###   ########.fr       */
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

void    Contact::set_index(int i)
{
    this->_index = i;
}

void    Contact::get_index( void )
{
    std::cout << this->_index;
}

void    Contact::set_first_name(std::string input)
{
    this->_first_name = input;
}

void    Contact::get_first_name( void )
{
    std::cout << this->_first_name  ;
}

void    Contact::set_last_name(std::string input)
{
    this->_last_name = input;
}

void    Contact::get_last_name( void )
{
    std::cout << this->_last_name ;
}

void    Contact::set_nick_name(std::string input)
{
    this->_nick_name = input;
}

void    Contact::get_nick_name( void )
{
    std::cout << this->_nick_name  ;
}


void    Contact::set_phone_number(std::string input)
{
    this->_phone_number = input;
}

void    Contact::get_phone_number( void )
{
    std::cout << this->_phone_number  ;
}


void    Contact::set_darkest_secret(std::string input)
{
    this->_darkest_secret = input;
}

void    Contact::get_darkest_secret( void )
{
    std::cout << this->_darkest_secret ;
}

void    Contact::get_contact(std::string str)
{
    int i;
    
    i = str.length();
    if (i < 10)
        std::cout << str;
    else
    {
        for(int y = 0; y < 9; y++) std::cout << str[y];
        std::cout << ".";
    }
    while(++i <= 10) std::cout << " ";
    std::cout << "|";  
}

void    Contact::get_all( void )
{
    std::cout << this->_index;
    std::cout << "         |";
    get_contact(this->_first_name);
    get_contact(this->_last_name);
    get_contact(this->_nick_name);
    std::cout << std::endl;
}