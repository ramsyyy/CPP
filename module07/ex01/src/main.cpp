/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:17:40 by raaga             #+#    #+#             */
/*   Updated: 2022/12/01 18:57:37 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"
#include <iostream>

void    incr(int &i) {
    i += 1;
}

int main() {
    int a[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 0};
    
    std::cout << "affichage !! " << std::endl ;
    iter(a, 10, &ft_print);
    std::cout << "modification !! " << std::endl << std::endl ;
    iter(a, 10, &incr);
    std::cout << "affichage !! " << std::endl ;
    iter(a, 10, &ft_print);
    
}