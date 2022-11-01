/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:19:18 by raaga             #+#    #+#             */
/*   Updated: 2022/11/01 15:47:06 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

void occurence(std::string &src , char *occ, char *dst) {
    for (int q = 0; q < (int)src.length(); q++)
    {
        int i = src.find(occ);
        if (i >= 0) {
            src.insert(i , dst);
            i = src.find(occ);
            src.erase(i , strlen(occ));
        }
    }
}

int main(int ac, char **av)
{
    std::ifstream ifs;
    std::ofstream ifsReplace("replace");
    std::string string;

    if (ac != 4) std::cout << "error few argument" << std::endl;
    ifs.open(av[1]);
    if (ifs.fail())
    {
        std::cout << "error " << av[1] << " open failed" << std::endl;
        return (0);
    }
    if (ifsReplace.fail()) {
        std::cout << "error file not open" << std::endl;
        return (0);
    }
    while (getline(ifs, string)) {
        occurence(string, av[2], av[3]);
        ifsReplace << string << std::endl;
    }
    ifs.close();
    ifsReplace.close();
    return (0);
}