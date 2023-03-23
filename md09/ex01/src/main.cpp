/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:32:22 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:50:32 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int ac, char **av) {
    std::string str;
    if (ac != 2)
        return 0;
    str = av[1];
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if (*it != ' ' && *it != '+' && *it != '-' &&  *it != '/' && *it != '*' && (*it < '0' ||  *it > '9'))
        {    
            std::cout << "error : " << *it << std::endl;
            return (0);
        }
    }
    rpn tmp(str);
   if (tmp.pars_string() == 0) {
        std::cout << "error calcul impossible" << std::endl;
        return(0);
    }
    tmp.calcul();
    return (0);
}