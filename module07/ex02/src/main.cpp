/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:01:13 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 18:13:01 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{

    Array<int> numbers(MAX_VAL/10);
    
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL/10; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    
   
    for (int i = 0; i < MAX_VAL/10; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try {
        for (int i = 0; i < MAX_VAL ; i++)
        {
            numbers[i] = rand();
        }
    }
    catch( std::exception &e) { std::cout << e.what() << std::endl;}
    std::cout <<  numbers.size() << std::endl;
    delete [] mirror;//
    return 0;
}