/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:11:56 by raaga             #+#    #+#             */
/*   Updated: 2023/03/22 23:49:00 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <map>
#include "../include/BitcoinExchange.hpp"


bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789.-") == std::string::npos;
}

void    diffus(std::map<Date, float>  map, Date date, float value) {
     float tmp ;
    if (map.find(date) == map.end()) {
        Date tmp2 = map.begin()->first;
        for (std::map<Date, float>::iterator it = map.begin(); it != map.end(); it++) {  
            if (it == map.end())
                break ;
            if (it != map.end() && it->first <= date && it->first >= tmp2){
                tmp2 = it->first;
                if (date.compare(tmp2) > date.compare(it->first) )
                    tmp2 = it->first;   
            }
        }
        tmp = map.find(tmp2)->second * value;
    }
    else
        tmp = (map[date] * value);
    std::cout << date << "=> " << value << " = " << tmp << std::endl; 
}

int parsing(std::string &line, std::map<Date, float> &map ,bool flag = false) {

    std::string str = line;

    std::istringstream stream(str);

    std::string year;
    std::string month;
    std::string day;
    std::string value;
    float  _value;

    std::getline(stream, year, '-');
    if (year.size() > 4)
        return(std::cout << "Error: bad input => " << year << std::endl,0);
    if (is_digits(year) == false)
        return(std::cout << "Error: bad input => " << year << std::endl,0);

    std::getline(stream, month, '-');
    if (month.size() > 2 || is_digits(month) == false || (atoi(month.c_str()) > 12 || atoi(month.c_str()) < 1))
        return(std::cout << "Error: bad input => " << year << "-" << month << std::endl,0);
        
    if (flag == false)
        std::getline(stream, day, ',');
    else 
        stream >> day;
    if (day.size() > 2)
        return(std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl,0);
    if (is_digits(day) == false)
        return(std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl,0);
    if (atoi(day.c_str()) > 31 && atoi(day.c_str()) < 1)
        return(std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl,0);
    
    Date date(year, month, day);
    while ((value[0] < '0' || value [0] > '9' ) && stream)
        stream >> value;
    if (is_digits(value) == false)
        return( std::cout << "Error: bad input => " << value << std::endl, -1);
    if (flag == true && (strtod(value.c_str(), NULL) > 1000 || strtod(value.c_str(), NULL) < 0))
        return(std::cout << "Error: bad input => too large value ot negative value :" << value << std::endl,-1);
    
    _value = strtod(value.c_str(), NULL);
    if (flag == false)
        map.insert(std::pair<Date, float>(date, _value));
    else 
        diffus(map, date, _value);
    return (1);
}


int main(int ac , char **av) {
    
    std::map<Date, float> data;

    
    if (ac < 2) return (0);
    std::ifstream   file("data.csv");
    if (file){
        std::string line;
        getline(file , line);
        while (getline(file , line))
        {
            if (parsing(line, data) == 0)
            {
                std::cout << "ERROR in file data.csv impossible exec" << std::endl;
                data.~map();
                file.close();
                line.~basic_string();
                exit(0);
            }
        }
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    std::ifstream   infile(av[1]);
    if (infile) {
        
        std::string line2;
        getline(infile , line2);
        while (getline(infile , line2))
            parsing(line2, data, true);
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    
    return (0);
    
}

