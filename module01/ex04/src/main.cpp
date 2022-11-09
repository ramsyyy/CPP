/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:19:18 by raaga             #+#    #+#             */
/*   Updated: 2022/11/09 19:31:05 by raaga            ###   ########.fr       */
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
    std::string string;

    if (ac != 4) {   
        std::cout << "error few argument" << std::endl;
        return (0);
    }
    ifs.open(av[1] , std::ifstream::ate);
    if (!ifs.is_open() || ifs.eof())
    {
        std::cout << "error " << av[1] << " open failed" << std::endl;
        return (0);
    }
    ifs.close();
    ifs.open(av[1], std::ifstream::in);
    std::string name = av[1];
    name += ".replace";
    std::ofstream ifsReplace(name.c_str());
    if (ifsReplace.fail()) {
        ifs.close();
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