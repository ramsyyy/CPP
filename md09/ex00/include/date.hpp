/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:21:41 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 15:23:17 by raaga            ###   ########.fr       */
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
		Date( void );
		Date( std::string str) ;
		Date( std::string year, std::string month, std::string day ) ;
		~Date( void ) ;
		Date	&operator=( Date const &copy ) ;

		Date( Date const &copy );
		std::string get_date() const ;

		long compare(Date const &copy) ;
		
		
};

bool	operator<( Date const &lfs, Date const &rhs );
		
bool	operator>( Date const &lfs, Date const &rhs ) ;

bool	operator==( Date const &lfs, Date const &rhs );

bool	operator!=( Date const &lfs, Date const &rhs ) ;

bool	operator<=( Date const &lfs, Date const &rhs ) ;

bool	operator>=( Date const &lfs, Date const &rhs );

std::ostream &operator<<(std::ostream &o, const Date &date);

#endif