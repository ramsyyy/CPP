/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:27:08 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 21:03:27 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include "../include/PmergMe.hpp"

int main(int ac, char **av) {
    PmergMe tri;


    tri.fill_container(ac, av);
    std::cout << "before : ";
    tri.show_container();
    tri.trie_vec();
    std::cout << std::endl;
    std::cout << "after : ";
    tri.show_container();
    
    return (0);
}