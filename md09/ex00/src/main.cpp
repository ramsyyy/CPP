/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:11:56 by raaga             #+#    #+#             */
/*   Updated: 2023/03/20 20:46:36 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <map>


bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789.") == std::string::npos;
}


int parsing(std::string &line, std::map<std::string, double> &map ,bool flag = false) {

    std::string str = line;

    std::istringstream stream(str);

    std::string year;
    std::string month;
    std::string day;
    std::string value;

    std::getline(stream, year, '-');
    if (year.size() > 4)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    if (is_digits(year) == false)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);

    std::getline(stream, month, '-');
    if (month.size() > 2)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    if (is_digits(month) == false)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    if (atoi(month.c_str()) > 12 && atoi(month.c_str()) < 1)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    
    std::getline(stream, day, ',');
     if (day.size() > 2)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    if (is_digits(day) == false)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    if (atoi(day.c_str()) > 31 && atoi(day.c_str()) < 1)
        return((std::cout << "Error: bad input => " << str << std::endl), 0);
    std::getline(stream, value);
    
        if (is_digits(value) == false)
            return((std::cout << "Error: bad input => " << str << std::endl), 0);
        if (flag == true && (strtod(value.c_str(), NULL) > 31 && strtod(value.c_str(), NULL) < 1))
            return((std::cout << "Error: bad input => " << str << std::endl), 0);
    std::string fin = year+"-"+month+"-"+day+"=>";
    map.insert(, value);
    return (1);
}


int main(int ac , char **av) {
    
    std::map<std::string, double> data;
    
    if (ac < 2) return (0);
    std::ifstream   file("data.csv");
    if (file){
        std::string line;
        getline(file , line);
        while (getline(file , line))
        {
            std::string tmp;
            if (parsing(line, data) == 0)
            {
                std::cout << "ERROR in file data" << std::endl;
                exit(0);
            }
        }
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    std::ifstream   input(av[1]);
    if (input) {
        
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    
    return (0);
    
}

