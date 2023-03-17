/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:11:56 by raaga             #+#    #+#             */
/*   Updated: 2023/03/17 17:22:19 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac , char **av) {
    
    if (ac < 2) return (0);
    std::ifstream   file(av[1]);
    if (file){
        std::string line;
        while (getline(file , line))
            std::cout << line << std::endl;;
            
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    return (0);
}
