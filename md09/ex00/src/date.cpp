/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:40:41 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 15:22:18 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/date.hpp"

Date::Date( void ) {};
Date::Date( std::string str) : _date(str) {} 
Date::Date( std::string year, std::string month, std::string day ) : _year(atoi(year.c_str())), _month(atoi(month.c_str())), _day(atoi(day.c_str())) {
	_date = year+"-"+month+"-"+day;
}

Date::~Date( void ) {}

Date	&Date::operator=( Date const &copy ) {
	this->_year = copy._year;
	this->_month = copy._month;
	this->_day = copy._day;
	this->_date = copy._date;
	return (*this);
}

Date::Date( Date const &copy ){
	*this = copy;
}

std::string Date::get_date() const {
	return (this->_date);
}

long Date::compare(Date const &copy) {
	long tmp = this->_year - copy._year;
	tmp += this->_month - copy._month;
	tmp += this->_day - copy._day;
	return tmp;
}

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