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

	std::string const GradeTooHighException( void );
	std::string const GradeTooLowException( void );

private : 
	std::string const	_name;
	int					_grade;
};

#endif