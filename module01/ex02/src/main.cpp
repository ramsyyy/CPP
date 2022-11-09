/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:20:16 by raaga             #+#    #+#             */
/*   Updated: 2022/11/07 16:45:34 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;
 
    std::cout << &str << std::endl;
    std::cout << strPtr << std::endl;
    std::cout << &strRef << std::endl;
    std::cout << str << std::endl;
    std::cout << *strPtr << std::endl;
    std::cout << strRef << std::endl;
    
    return (0);
}