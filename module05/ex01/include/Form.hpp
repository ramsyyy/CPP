#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public :
	Form( void );
	Form(std::string name, bool sign, int gradeSign, int gradeExec);
	~Form( void );
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

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		beSigned(Bureaucrat a);

private :
	std::string const	_name;
	bool				_signed;
	int					_gradeSign;
	int					_gradeExec;

};

std::ostream &operator<<(std::ostream &o, Form const &copy);

#endif