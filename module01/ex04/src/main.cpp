/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:19:18 by raaga             #+#    #+#             */
/*   Updated: 2022/11/10 17:38:52 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

void occurence(std::string &src , char *occ, char *dst) {
    for (std::__cxx11::basic_string<char>::size_type q = 0; q < src.length(); q++)
    {
        int i = src.find(occ , q);
         
        if (i >= 0) {
            src.erase(i , strlen(occ));
            src.insert(i , dst);
            q = i + strlen(dst);
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
