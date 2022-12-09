/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:42:13 by raaga             #+#    #+#             */
/*   Updated: 2022/12/09 19:41:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"


int main() {
    Span sp = Span(5);
    std::vector<int> array(5);
    /*for(int i = 0; i < static_cast<int>(array.size()); i++) {
        std::cout << array[i] << std::endl;
    }*/
    try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(12);
    sp.addNumber(9);
    sp.addNumber(11);
    //sp.addNumber(45); }
    }
    catch( std::exception &e) { std::cout << e.what() << std::endl;}
    
    std::cout << sp.shortestSpan() << std::endl;
   // std::cout << sp.longestSpan() << std::endl;
    return 0;
}