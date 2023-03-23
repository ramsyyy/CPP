/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:17 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:25:30 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file) : file(file) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy) {
    this->data_base = copy.data_base;
    return (*this); 
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
    *this = copy; 
}

bool is_digits(const std::string &str) {
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
    std::cout << date << " => " << value << " = " << tmp << std::endl; 
}


int parsing(std::string &line, std::map<Date, float> &map ,bool flag = false) {

        std::string str = line;

        std::istringstream stream(str);

        std::string year;
        std::string month;
        std::string day;
        std::string value;
        float  _value;

        getline(stream, year, '-');
        if (year.size() > 4 || is_digits(year) == false)
            return(std::cout << "Error: bad input => " << year << std::endl,0);

        getline(stream, month, '-');
        if (month.size() > 2 || is_digits(month) == false || (atoi(month.c_str()) > 12 || atoi(month.c_str()) < 1))
            return(std::cout << "Error: bad input => " << year << "-" << month << std::endl,0);
            
        if (flag == false)
            getline(stream, day, ',');
        else {
            getline(stream, day, '|');
            day.erase(day.end()-1);
        }
        if (day.size() > 2 || is_digits(day) == false || (atoi(day.c_str()) > 31 && atoi(day.c_str()) < 1))
            return(std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl,0);
        
        Date date(year, month, day);
        // while ((value[0] < '0' || value [0] > '9' ) && stream)
        //     stream >> value;
        getline(stream, value);
        value.erase(value.begin());
        if (is_digits(value) == false)
            return( std::cout << "Error: bad input => " << value << std::endl, 0);
        if (flag == true && (strtod(value.c_str(), NULL) > 1000 || strtod(value.c_str(), NULL) < 0))
            return(std::cout << "Error: bad input => too large value ot negative value :" << value << std::endl, 0);
        _value = strtod(value.c_str(), NULL);
        if (flag == false)
            map.insert(std::pair<Date, float>(date, _value));
        else 
            diffus(map, date, _value);
        return (1);
}


void    BitcoinExchange::fill_data(void) {
    std::ifstream file("data.csv");
    if (file) {
        std::string line;
        getline(file , line);
        while (getline(file , line))
        {
            if (parsing(line, this->data_base) == 0)
            {
                std::cout << "ERROR in file data.csv impossible exec" << std::endl;
                this->data_base.~map();
                file.close();
                line.~basic_string();
                exit(0);
            }
        }
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
}

void    BitcoinExchange::exchange(void) {
    std::ifstream infile(this->file.c_str());
    if (infile) {
        std::string line2;
        getline(infile , line2);
        while (getline(infile , line2))
            parsing(line2, this->data_base, true);
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
}