#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern{
public :
	Intern( void );
	~Intern( void );
	Intern( Intern const &copy );

	class NameFormNotExist : public std::exception {
		virtual const char * what() const throw() {
			return ("This name Form does not exist !");
		}
	};


	Form	*makeForm(std::string s1, std::string s2);
	void *scf(std::string s);
	void *rrf(std::string s);
	void *ppf(std::string s) ;
	
private : 
};

#endif