#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class Form;

class PresidentialPardonForm : public Form{
public :
	PresidentialPardonForm( std::string target );
	~PresidentialPardonForm( void );
	PresidentialPardonForm	&operator=( PresidentialPardonForm const &copy );
	PresidentialPardonForm( PresidentialPardonForm const &copy );

	void execute(Bureaucrat const &executor) const;
	
private : 

};

#endif