/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:02:03 by raaga             #+#    #+#             */
/*   Updated: 2022/11/25 19:56:07 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Scalar{
public :
	Scalar( void );
	Scalar( char *str );
	~Scalar( void );

	void	incorrectArg(std::string str);
	void	findType(std::string str);
	void	setInt( std::string str );
	void	setChar( std::string str );
	void	setFloat( std::string str );
	void	setDouble( std::string str);

	class ImpossibleException : public std::exception {
		public :
			virtual const char * what() const throw() {
				return ("impossible");
			}
	};

	class NoDisplayException : public std::exception {
		public :
			virtual const char * what() const throw() {
				return ("Aucun display");
			}
	};
	
	class ErrorArg : public std::exception {
		public :
			virtual const char * what() const throw() {
				return ("Erreur, entrez soit un char, un int, un float ou un double");
			}
	};

private : 
	std::string			_type;
	bool				_point;
	bool				_charF;
	bool				_char;
	bool				_allNumber;
	long 				_long;
	std::string const	_str;
	int					_int;
	char				_charValue;
	float				_float;

};

#endif