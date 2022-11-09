/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:03:58 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 11:49:13 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h> 
#include <ctype.h>

int main(int ac, char **av)
{
    
    if (ac == 1)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {    
            for (size_t x = 0; x <= strlen(av[i]); x++) av[i][x] = toupper(av[i][x]);
            std::cout << av[i];
        }
    }
    std::cout << "\n" ;
    return(0);
}