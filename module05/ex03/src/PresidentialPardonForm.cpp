#include "../include/Form.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
	const_cast<std::string &>(this->_target) = target;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm Destructor called " << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &copy ) {
	std::cout << "PresidentialPardonForm copy assignement operator called " << std::endl;
	const_cast <std::string &>(this->_target) = copy._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy ) {
	std::cout << "PresidentialPardonForm copy constructor called " << std::endl;
	*this = copy;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	this->canExec(executor);
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox!" << std::endl;
}

