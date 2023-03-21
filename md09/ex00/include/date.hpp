/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:21:41 by raaga             #+#    #+#             */
/*   Updated: 2023/03/22 00:38:18 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
# define DATE_HPP

# include <iostream>
# include <string>
#include <stdlib.h>

class Date{
	private :
		int _year;
		int _month;
		int _day;
		std::string _date;
		
	public :
		Date( void ) {};
		Date( std::string str) : _date(str) {} 
		Date( std::string year, std::string month, std::string day ) : _year(atoi(year.c_str())), _month(atoi(month.c_str())), _day(atoi(day.c_str())) {
			_date = year+"-"+month+"-"+day;
		}
		~Date( void ) {}
		Date	&operator=( Date const &copy ) {
			this->_year = copy._year;
			this->_month = copy._month;
			this->_day = copy._day;
			this->_date = copy._date;
			return (*this);
		}
		Date( Date const &copy ){
			*this = copy;
		}
		std::string get_date() const {
			return (this->_date);
		}
		
};

bool	operator<( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() < rhs.get_date()); 
}

bool	operator>( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() > rhs.get_date()); 
}

bool	operator==( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() == rhs.get_date()); 
}

bool	operator!=( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() != rhs.get_date()); 
}

bool	operator<=( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() <= rhs.get_date()); 
}

bool	operator>=( Date const &lfs, Date const &rhs ) {
	return (lfs.get_date() >= rhs.get_date()); 
}

std::ostream &operator<<(std::ostream &o, const Date &date){
	o << date.get_date();
	return (o);
}

#endif