#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>

class Form;

class RobotomyRequestForm : public Form {
public :
	RobotomyRequestForm( std::string target  );
	~RobotomyRequestForm( void );
	RobotomyRequestForm	&operator=( RobotomyRequestForm const &copy );
	RobotomyRequestForm( RobotomyRequestForm const &copy );

	void execute(Bureaucrat const &executor) const;
	
private : 
	
};

#endif