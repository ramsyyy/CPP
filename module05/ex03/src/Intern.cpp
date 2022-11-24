#include "../include/Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "Intern Destructor called " << std::endl;
}

Intern::Intern( Intern const &copy ) {
	std::cout << "Intern copy constructor called " << std::endl;
	*this = copy;
}

void *Intern::scf(std::string s) {
	return (new ShrubberyCreationForm(s));
}

void *Intern::rrf( std::string s ) {
	return (new RobotomyRequestForm(s));
}

void *Intern::ppf( std::string s) {
	return (new PresidentialPardonForm(s));
}

Form	*Intern::makeForm( std::string s1, std::string s2) {
	try {
		std::string formName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		void *(Intern::*ptr_fct[3])(std::string) = {&Intern::scf, &Intern::rrf, &Intern::ppf};
		Form *a = NULL;
		for(int i = 0; i < 3; i++) {
			if (s1 == formName[i]) {
				a = (Form *)(this->*ptr_fct[i])(s2);
				break ;
			}
		}
		if (a == NULL) 
			throw NameFormNotExist();
		std::cout << "Intern create " << a->getName()  << std::endl;
		return (a);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << "Intern can't create this Form !" << std::endl;
		return (NULL);
	}
}

