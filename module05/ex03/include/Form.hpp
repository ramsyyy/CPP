/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:42:43 by raaga             #+#    #+#             */
/*   Updated: 2022/11/24 13:53:55 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public :
	Form( void );
	Form(std::string name, int gradeSign, int gradeExec);
	virtual ~Form( void );
	Form	&operator=( Form const &copy );
	Form( Form const &copy );

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
	class FormNotSigned : public std::exception {
		public :
			virtual const char * what() const throw() {
				return ("This Form is not signed");
			}
	};

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		beSigned(const Bureaucrat a);
	void		canExec(const Bureaucrat &a) const;
	virtual void execute(Bureaucrat const & executor) const = 0;

private :
	std::string const	_name;
	bool				_signed;
	int					_gradeSign;
	int					_gradeExec;

protected : 
	const std::string _target;
};

std::ostream &operator<<(std::ostream &o, Form const &copy);

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <fstream>

#endif