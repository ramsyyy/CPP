/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:33:07 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 20:21:56 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat{
public :
	Bureaucrat( void );
	~Bureaucrat( void );
	Bureaucrat	&operator=( Bureaucrat const &copy );
	Bureaucrat( Bureaucrat const &copy );
	Bureaucrat( std::string name, int n);

	class GradeTooLowException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("the grade is too low !");
			} 
	};

	class GradeTooHighException : public std::exception {
		public :
			virtual const char*  what() const throw() {
				return ("the grade is too high !");
			}
		
	};

	int getGrade( void ) const;
	std::string getName( void ) const;
	void levelUp( int i ) ;
	void levelDown( int i ) ;


private : 
	std::string const	_name;
	int					_grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &e);

#endif