#include "../include/Form.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	const_cast<std::string &>(this->_target) = target;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm Destructor called " << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &copy ) {
	std::cout << "RobotomyRequestForm copy assignement operator called " << std::endl;
	const_cast<std::string &>(this->_target) = copy._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy ) {
	std::cout << "RobotomyRequestForm copy constructor called " << std::endl;
	*this = copy;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	this->canExec(executor);
	std::cout << "BZIIIIIIIIIIII......." << std::endl;
	if ( (rand() % 10 + 1) % 2 == 0)
		std::cout << this->_target << " robotomysed SUCCESS" << std::endl;
	else
		std::cout << this->_target << " robotomysed FAILURE" << std::endl;
}

